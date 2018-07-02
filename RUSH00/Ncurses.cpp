// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Ncurses.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 15:26:02 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 20:56:21 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Ncurses.hpp"
#include <MainGame.hpp>

Ncurses::Ncurses(int width, int height) :
_width(width),
_height(height)
{
	return;
}

void Ncurses::drawStart(void) const {
	int y, x;
	getmaxyx(stdscr, y, x);
	y >>= 2;
	int z = y;
	x >>=2;
	while (--y > -20) {
		mvwaddstr(stdscr, y, x, "      |           |            .                     x");
		mvwaddstr(stdscr, y + 1, x, "  .   | .         |        .                        .");
		mvwaddstr(stdscr, y + 2, x, "      |     _  .  |                         .                     .");
		mvwaddstr(stdscr, y + 3, x, "      |    /'\\    |  .            .                    .");
		mvwaddstr(stdscr, y + 4, x, "      |>=<|-O-|>=<|  A LONG TIME AGO IN A GALAXY FAR, FAR AWAY.....");
		mvwaddstr(stdscr, y + 5, x, "  .   |    \\_/    |       .            .                       .");
		mvwaddstr(stdscr, y + 6, x, "      |        .  |");
		mvwaddstr(stdscr, y + 7, x, "      |  .        |");
		refresh();
		usleep(190000);
		clear();
	}
	mvwaddstr(stdscr, z + 1, x, "         _________________      ____         __________        ");
	mvwaddstr(stdscr, z + 2, x, "        /                 |    /    \\       |          \\       ");
	mvwaddstr(stdscr, z + 3, x, "       /    ______   _____|   /      \\      |    ___    |      ");
	mvwaddstr(stdscr, z + 4, x, "       \\    \\    |   |       /   /\\   \\     |   |___>   |      ");
	mvwaddstr(stdscr, z + 5, x, "        \\    \\   |   |      /   /__\\   \\    |         _/     ");  
	mvwaddstr(stdscr, z + 6, x, " ________>    |  |   |     /            \\   |   |\\    \\_______ ");
	mvwaddstr(stdscr, z + 7, x, "|            /   |   |    /    ______    \\  |   | \\           |");
	mvwaddstr(stdscr, z + 8, x, "|___________/    |___|   /____/      \\____\\ |___|  \\__________|");
	mvwaddstr(stdscr, z + 9, x, " ____    __    _____   ____         __________      _________  ");
	mvwaddstr(stdscr, z + 10, x, "\\    \\  /  \\  /    /  /    \\       |          \\    /         | ");
	mvwaddstr(stdscr, z + 11, x, " \\    \\/    \\/    /  /      \\      |    ___    |  /    ______| ");
	mvwaddstr(stdscr, z + 12, x, "  \\              /  /   /\\   \\     |   |___>   |  \\    \\       ");
	mvwaddstr(stdscr, z + 13, x, "   \\            /  /   /__\\   \\    |         _/    \\    \\   ");   
	mvwaddstr(stdscr, z + 14, x, "    \\    /\\    /  /            \\   |   |\\    \\______>    |     ");
	mvwaddstr(stdscr, z + 15, x, "     \\  /  \\  /  /    ______    \\  |   | \\              /    ");  
	mvwaddstr(stdscr, z + 16, x, "      \\/    \\/  /____/      \\____\\ |___|  \\____________/       ");
	mvwaddstr(stdscr, z + 17, x, "               PRESS SPACE TO START THIS EPIC GAME");
	refresh();
	while(1)
	{
		if (getch() == ' ')
			break;
	}
}	

Ncurses::Ncurses(void) {
	return ;
}



void	Ncurses::start() {
	initscr();
	std::cout << "\034[0;31mGame Over.\033[1;31m\n";
	int _maxHeight, _maxWidth, a, i;
	getmaxyx(stdscr, _maxHeight, _maxWidth);
	refresh();
	wrefresh(stdscr);
	_window = newwin(_maxHeight >> 1, _maxWidth >> 1, _maxHeight >> 2, _maxWidth >> 2);
	WINDOW* _window2 = newwin(_maxHeight >> 4, _maxWidth >> 1, 1, _maxWidth >> 2);
	getmaxyx(_window, _maxHeight, _maxWidth);
	getmaxyx(_window2, i, a);
	keypad(stdscr, true);
	start_color();
	box(_window, '|', '-');
	box(_window2, '|', '-');
	

//	init_pair(1, COLOR_MAGENTA, COLOR_BLACK);
//	wbkgd(_window, COLOR_PAIR(1));
	keypad(_window, true);
//	whline(_window, '^', 300);
	cbreak();
	noecho();
	clear();
	curs_set(0);
	refresh();
	nodelay(_window, true);
	Player p(20, 20);
	drawStart();

	wrefresh(_window);
	// wrefresh(_window2);
	int w_i = 0;
	int e_i = 0;
	// int r;
	int u;
	int q;
	GameEntity *_enBul[1024];
	for (int i = 0; i < 1024; ++i)
		_enBul[i] = 0;
	GameEntity *_plBul[1024];
	for (int i = 0; i < 1024; ++i)
		_plBul[i] = 0;
	GameEntity *enems[1024];
	for (int i = 0; i < 1024; ++i)
		enems[i] = 0;
	int j = 0;
	std::srand(std::time(0));
	Star *deathstar = new Star(5, 5);
   deathstar->setY(1);
	while (1)
	{
		std::string str = "HP : " + std::to_string(p.getHp());
	char *s1 = &str[0];
		clock_t t;
  		t = clock();
  		t /= 1000;
		std::string str1 = "Time: " + std::to_string(t);
		char *s11 = &str1[0];
		std::string str9 = "Score: " + std::to_string(p.getScore());
		char *s12 = &str9[0];
		mvwprintw(_window2, 1, ((_maxWidth >> 2) + 10), s11);
		mvwprintw(_window2, 1, (_maxWidth >> 2), s1);
		mvwprintw(_window2, 1, (_maxWidth >> 1) + 4, s12);
static int s = 10;
       s++;
       if (s % 50 == 0)
       deathstar->movess(_window, ++s, _maxWidth, _maxHeight, &p);
		init_pair(1, COLOR_BLUE, COLOR_BLACK);
		wattron(_window, COLOR_PAIR(1));
		mvwaddstr(_window, p.getY(), p.getX(), "-@-");
		wattroff(_window, COLOR_PAIR(1));
		int ch = wgetch(_window);
		if (ch == KEY_UP || ch == KEY_DOWN || ch == KEY_LEFT || ch == KEY_RIGHT)
			p.moves(_window, ch, _maxWidth, _maxHeight, "   ");
		else if (ch == ' ')
		{
			for (int i = 0; i < 1024; ++i)
				if (_plBul[i] == 0)
					_plBul[i] = new GameEntity(p.getX() + 1, p.getY());
		}
		else if (ch == 27)
			return ;

		
		for (int i = 0; i < 1024; ++i)
			if (_plBul[i] != 0 && _plBul[i]->getY() > 1)
			{
				if (_plBul[i]->getY() != p.getY())
					mvwaddstr(_window, _plBul[i]->getY(),_plBul[i]->getX(), " ");
				_plBul[i]->setY(_plBul[i]->getY() - 1);
				mvwaddstr(_window, _plBul[i]->getY(),_plBul[i]->getX(), "^");
			}
		for (int i = 0; i < 1024; ++i)
			if (_enBul[i] != 0 && _enBul[i]->getY() > 1)
			{
				mvwaddstr(_window, _enBul[i]->getY(),_enBul[i]->getX(), " ");
				_enBul[i]->setY(_enBul[i]->getY() + 1);
				init_pair(1, COLOR_RED, COLOR_BLACK);

    			wattron(_window, COLOR_PAIR(1));
				mvwaddstr(_window, _enBul[i]->getY(),_enBul[i]->getX(), "|");
    			wattroff(_window, COLOR_PAIR(1));
			}
		i = -1;
		while (e_i % 40 == 0 && ++i < 1024)     
			if (enems[i] == 0)
			{
				q = rand() % (_maxWidth - 2);
				q = (q > 1) ? q : 2;
				enems[i] = new Enemy(1, 1);
				enems[i]->setY(1);
				enems[i]->setX(q);
				break ;
			}
		if (e_i % 40 == 0)
			for (int i = 0; i < 1024; ++i)
				if (enems[i] != 0)
				{
					u = rand() % 10;
					mvwaddstr(_window, enems[i]->getY(), enems[i]->getX(), " ");
					if (((p.getX() - enems[i]->getX()) < 3) && ((p.getX() - enems[i]->getX()) > -3) && ((p.getY() - enems[i]->getY() > -3)))
					{
                    	p.addHp(-5);
                    	p.addScore(10);
                    	enems[i]->setY(_maxHeight - 3);
					}
					else
					{
						enems[i]->setY(enems[i]->getY() + 1);
						mvwaddstr(_window, enems[i]->getY(), enems[i]->getX(), "o");
					}
					if (u == 2)
					{
						j = -1;
						while (++j < 1024)
							if (_enBul[j] == 0)
							{
								_enBul[j] = new GameEntity(enems[i]->getX(), enems[i]->getY());
								break ;
							}
					}
				}
		for (int i = 0; i < 1024; ++i)
			if (_enBul[i] != 0 && _enBul[i]->getY() + 1 >= _maxHeight - 1)
			{
				mvwaddstr(_window, _enBul[i]->getY(),_enBul[i]->getX(), " ");
				delete _enBul[i];
				_enBul[i] = 0;

			}
		for (int i = 0; i < 1024; ++i)
			if (_plBul[i] != 0 && _plBul[i]->getY() <= 1)
			{
				mvwaddstr(_window, _plBul[i]->getY(),_plBul[i]->getX(), " ");
				delete _plBul[i];
				_plBul[i] = 0;

			}
		for (int i = 0; i < 1024; ++i)
			if (enems[i] != 0 && enems[i]->getY() + 1 >= _maxHeight - 1)
			{
				mvwaddstr(_window, enems[i]->getY(),enems[i]->getX(), " ");
				delete enems[i];
				enems[i] = 0;

			}
		// for (int i = 0; i < 1024; ++i)
		// {
		// 	if (_enBul[i] != 0)
		// 	{
		// 		if ((_enBul[i]->getX() == p.getX() || _enBul[i]->getX() == p.getX() + 1 || _enBul[i]->getY() == p.getY() + 2)&&
		// 			 _enBul[i]->getY() == p.getY())
		// 		{
		// 			p.addHp((p.getHp() - 10));
		// 		}
		// 	}
		// }
	wrefresh(_window);
	wrefresh(_window2);
	if (t < 150)
            mvwprintw(_window2, 2, ((_maxWidth >> 2) + 10), "Level 1");
        if (t > 500)
        {
            mvwprintw(_window2, 2, ((_maxWidth >> 2) + 10), "Level 2");
            usleep(5000);
        }
        else if (t > 800)
        {
            mvwprintw(_window2, 2, ((_maxWidth >> 2) + 10), "Level 3");
            usleep(4000);
        }
        else if (t > 1000)
        {
            mvwprintw(_window2, 2, ((_maxWidth >> 2) + 10), "Level 4");
            usleep(3000);
        }
        else
            usleep(7000);
		++w_i;
		++e_i;
	if (p.getHp() <= 0)
	{
		mvwprintw(_window2, 2, ((_maxWidth >> 2) + 10), "GAME OVER!");
		wrefresh(_window2);
        usleep(4000000);
        return;
	}
	}
	clear();
	return;
}

Ncurses::Ncurses(const Ncurses & nc) {
	*this = nc;
	return;
}

void	Ncurses::run(void) {
	move(5, 5);
	move(5, 5);
	std::string text = "Hello world!";
	for(int i = 0; i < (int)text.size(); i++)
	{
		addch(text[i]);
		addch(' ');
	}
	refresh();
}

Ncurses::~Ncurses(void) {
	std::cout << "\034[0;31mGame Over.\033[1;31m\n";
	endwin();
	return ;
}

Ncurses & Ncurses::operator=(Ncurses const & nc) {
	this->_width = nc.getWidth();
	this->_height = nc.getHeight();
	this->_window = nc.getWindow();
	return *this;
}

void	Ncurses::setWindow(WINDOW * wind) {
	_window = wind;
}

WINDOW *	Ncurses::getWindow(void) const{
	return this->_window;
}


int	Ncurses::getWidth(void) const{
	return this->_width;
}

int	Ncurses::getHeight(void) const{
	return this->_height;
}
