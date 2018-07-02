/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Display.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 10:41:23 by omartyno          #+#    #+#             */
/*   Updated: 2018/07/01 21:44:00 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Display.hpp"

Display::Display( int h, int w, int x, int y, IMonitorModule &mdl ) 
: _height(h), _width(w), _xpos(x), _ypos(y), _mdl(mdl)
{
		this->_win = newwin(this->_height, this->_width,
				this->_ypos, this->_xpos);

		init_pair(1, COLOR_RED, COLOR_BLACK);
		this->_colors[0] = COLOR_PAIR(1);
		init_pair(2, COLOR_GREEN, COLOR_BLACK);
		this->_colors[1] = COLOR_PAIR(2);
		init_pair(3, COLOR_YELLOW, COLOR_BLACK);
		this->_colors[2] = COLOR_PAIR(3);
		init_pair(4, COLOR_BLUE, COLOR_BLACK);
		this->_colors[3] = COLOR_PAIR(4);
		init_pair(5, COLOR_MAGENTA, COLOR_BLACK);
		this->_colors[4] = COLOR_PAIR(5);
		init_pair(6, COLOR_CYAN, COLOR_BLACK);
		this->_colors[5] = COLOR_PAIR(6);
		init_pair(7, COLOR_WHITE, COLOR_BLACK);
		this->_colors[6] = COLOR_PAIR(7);
}

Display::Display( Display const &src ) : _mdl(src.getMdl()) {
	*this = src;
}

Display::~Display( void ) {
	delwin(this->_win);
}

Display &	Display::operator=( Display const & src ) {
	this->_height = src.getHeight();
	this->_width = src.getWidth();
	this->_xpos = src.getXPos();
	this->_ypos = src.getYPos();
	this->_win = src.getWin();
	return *this;
}

int		Display::getHeight( void ) const {
	return this->_height;
}
int		Display::getWidth( void ) const {
	return this->_width;
}

int		Display::getXPos( void ) const {
	return this->_xpos;
}
int		Display::getYPos( void ) const {
	return this->_ypos;
}
int		Display::getColor( int i ) const {
	return this->_colors[i];
}

WINDOW	*Display::getWin( void ) const {
	return this->_win;
}

IMonitorModule &	Display::getMdl( void ) const {
	return _mdl;
}

void	Display::recreate( void ) {
	werase(this->_win);
	delwin(_win);
	_win = newwin(_height, _width, _ypos, _xpos);
}

void	Display::update( void ) {
	_mdl.updateData();
}


void	Display::show ( int x, int y ) {
	_xpos = x;
	_ypos = y;
	this->recreate();
	std::string **data = _mdl.dataToString();
	for (size_t i = 0; data[i]; i++)
		mvwprintw(_win, i + 1, 1, data[i]->c_str());
	box(this->_win, 0, 0);
	wrefresh(this->_win);
}

std::ostream &	operator<<(std::ostream	& o, Display const & src ) {
	o << "Display is [" << src.getHeight() << ":" << src.getWidth() << "] on ";
	o << "[" << src.getYPos() << ":" << src.getXPos() << "]";
	return o;
}
