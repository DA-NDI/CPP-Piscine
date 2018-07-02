/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CursesDisplay.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 19:11:17 by omartyno          #+#    #+#             */
/*   Updated: 2018/07/01 22:03:44 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CursesDisplay.hpp"

CursesDisplay::CursesDisplay( void ) {
	_mt = CursesDisplay::initilization();
	_coormt.x = _mt->getWidth();
	_coormt.y = _mt->getHeight();

}

CursesDisplay::~CursesDisplay( void ) {
	std::list<Display *>::iterator	it = _monitors.begin();

	for (; it != _monitors.end(); it++)
		delete *it;
}

void		CursesDisplay::printResizeInfo(int h, int w)
{
	std::string			resize = "Change screen to 40/80";
	std::stringstream	ss;

	erase();
	mvprintw( h / 2, (w - resize.length()) / 2, "%s", resize.c_str());
	ss << "[Now is " << h << ":" << w << "]";
	mvprintw( h / 2 + 1, (w - ss.str().length()) / 2, "%s", ss.str().c_str());
	refresh();
}

bool		CursesDisplay::resizeInfo(int h, int w)
{
	CursesDisplay::printResizeInfo(h, w);
	if (h < 40 || w < 80)
		while (true)
		{
			getmaxyx(stdscr, h, w);
			CursesDisplay::printResizeInfo(h, w);
			if (getch() == 27)
				return false;
		}
	return true;
}

TermParams	*CursesDisplay::initilization( void ) {	
	int					h, w;

	initscr();
	cbreak();
	nodelay(stdscr, TRUE);
	keypad(stdscr, TRUE);
	noecho();
	curs_set(0); // invisible cursor

	getmaxyx(stdscr, h, w);
	if (has_colors() == false) {
		endwin();
		std::cout << "Your terminal doesn't support colors" << std::endl;
		exit(1);
	}
	start_color();
	refresh();
	return new TermParams();
}

void		CursesDisplay::pushMonitor( IMonitorModule &mdl ) {
	std::string		**data = mdl.dataToString();
	int				h = 0;
	int				w = 0;

	for (; data[h]; h++) {
		if (w < data[h]->length())
			w = data[h]->length();
	}
	w += 2;
	h += 2;
	int x = 0;
	int y = 0;
	Display		*disp = new Display(h, w, x, y, mdl);
	_monitors.push_front(disp);
}

void		CursesDisplay::start() {
	t_top_data			td;
	td.lastupdated = 0;
	DateTimeMonitor		dtm;
	OSInfo				oim;
	CPUMonitor			cpm(td);
	RAMMonitor			rmm(td);
	NetworkMonitor		nwm(td);
	HostUserMonitor		hum;
	AsciiCat			cat;

	IMonitorModule		*modules[] = { &dtm, &oim, &cpm, &rmm, &nwm, &hum, &cat, NULL };
	for (int i = 0; modules[i]; i++) {
		this->pushMonitor(*(modules[i]));
	}
	while (1) {
		if (getch() == 27)
		{
			endwin();
			break;
		}
		this->update();
		this->draw();
	}
}

void		CursesDisplay::update() {
	std::list<Display *>::iterator	it = _monitors.begin();

	for (; it != _monitors.end(); it++)
		(*it)->update();
}

void		CursesDisplay::update_mt() {
	_mt->update();
	if (_coormt.x != _mt->getWidth() || _coormt.y != _mt->getHeight()) {
		endwin();
		std::cout << "YOU ARE NOT ALLOWED TO CHANGE TERMINAL SIZE!!!" << std::endl;
		exit(100500);
	}
}

void		CursesDisplay::draw() {
	std::list<Display *>::iterator	it = _monitors.begin();
	bool							map[_mt->getHeight()][_mt->getWidth()];
	int								x;
	int								y;

	this->update_mt();
	for (int i = 0; i < _mt->getHeight(); i++)
		for (int j = 0; j < _mt->getWidth(); j++)
			map[i][j] = true;

	for (; it != _monitors.end(); it++) {
		x = -1;
		y = -1;
		for (int i = 0; i < _mt->getHeight(); i++) {
			for (int j = 0; j + (*it)->getWidth() < _mt->getWidth(); j++) {
				if (map[i][j]) {
					x = j;
					y = i;
					break;
				}
			}
			if (x != -1 && y != -1) break;
		}

		if (x == -1 && y == -1) {
			continue;
		}

		(*it)->show(x, y);
		for (int i = 0; i < _mt->getHeight() && i < y + (*it)->getHeight(); i++) {
			for (int j = 0; j < _mt->getWidth() && j < x + (*it)->getWidth(); j++) {
				map[i][j] = false;
			}
		}
	}
}
