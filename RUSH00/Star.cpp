// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Star.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: oltkache <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 16:59:59 by oltkache          #+#    #+#             //
//   Updated: 2018/07/02 11:22:36 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Star.hpp"
#include <unistd.h>

Star::Star(int x, int y) : GameEntity(x, y) {
	this->setType("Star");
	std::srand(std::time(0));
	return ;
}
Star::Star(void) {
	return ;
}
Star::~Star(void) {
	return ;
}

Star::Star(Star const & src) {
	*this = src;
	return;
}

void Star::move(void) {
	return ;
}

void Star::setHorde(EnemyHorde * bullets) {
	this->bullets = bullets;
}

Star & Star::operator=(Star const &) {
	return *this;
}

void Star::moves(WINDOW*, int, int , int , const char*, GameEntity *) {
	return;
}

void Star::setBulletY(int y ) {
	this->_bulletY = y;
}
void Star::setBulletX(int x) {
	this->_bulletX = x;
}
int Star::getBulletX(void) {
	return this->_bulletX;
}
int Star::getBulletY(void) {
	return this->_bulletY;
}

void Star::moves(WINDOW*, int, int, int, const char*) {
	return ;
}

void Star::movess(WINDOW* _window, int k, int maxWidth, int maxHeight, GameEntity *player) {
	static int o = 0;
	o++;
	mvwaddstr(_window, _startY + 0, _startX, "             ");
	mvwaddstr(_window, _startY + 1, _startX, "             ");
	mvwaddstr(_window, _startY + 2, _startX, "             ");
	mvwaddstr(_window, _startY + 3, _startX, "             ");
	mvwaddstr(_window, _startY + 4, _startX, "             ");
	mvwaddstr(_window, _startY + 5, _startX, "             ");
	mvwaddstr(_window, _startY + 6, _startX, "             ");
	mvwaddstr(_window, _startY + 7, _startX, "             ");
	mvwaddstr(_window, _startY + 8, _startX, "             ");
	if (_startY + 11 < maxHeight) {
		setY(_startY + 2);
		if (o % 8 == 0 && (_startX + 10 < maxWidth))
		{
			setX(_startX + 2);
		}
		else if (o % 7 == 0 && (_startX - 4) > 0) {
			setX(_startX - 2);
		}
	}
	else
	{
		k = std::rand() % (maxWidth - 10);
		k = (k > 0) ? k : 3;
		setY(1);
		setX(k);
	}
	if (player->getHp() == 0) {
		mvwaddstr(_window, player->getX(), player->getY(), "GAME OVER");
	}
	mvwaddstr(_window, _startY + 0, _startX, "|           |");
	mvwaddstr(_window, _startY + 1, _startX, "| .         |");
	mvwaddstr(_window, _startY + 2, _startX, "|     _  .  |");
	mvwaddstr(_window, _startY + 3, _startX, "|    /'\\    |");
	mvwaddstr(_window, _startY + 4, _startX, "|>=<|-O-|>=<|");
	mvwaddstr(_window, _startY + 5, _startX, "|    \\_/    |");
	mvwaddstr(_window, _startY + 6, _startX, "|        .  |");
	mvwaddstr(_window, _startY + 7, _startX, "|  .        |");
	mvwaddstr(_window, _startY + 8, _startX, "|           |");
	if ((k = std::rand() % 2) == 0) {
		attack(player, _window, maxHeight);
	}
}

void Star::attack(GameEntity * player, WINDOW *_window, int maxHeight) {
	while (_bulletY + 6 < maxHeight) {
	mvwaddstr(_window, _startY + 1, _startX + 6, "    ");
	mvwaddstr(_window, _startY + 2, _startX + 6, "    ");
	mvwaddstr(_window, _startY + 3, _startX + 6, "    ");
	if (_bulletY + 5 < maxHeight) {
		setBulletY(_bulletY + 1);
	}
	else
	{
		setY(this->getBulletY() + 1);
		setX(this->getBulletX());
	}
	if (player->getX() == this->getBulletX() && player->getY() == this->getBulletY()) {
		player->addHp(-20);
	}
	init_pair(1, COLOR_RED, COLOR_BLACK);

	wattron(_window, COLOR_PAIR(1));
	mvwaddstr(_window, _startY + 1, _startX + 6, "||||");
	mvwaddstr(_window, _startY + 2, _startX + 6, "||||");
	mvwaddstr(_window, _startY + 3, _startX + 6, "||||");
	wattroff(_window, COLOR_PAIR(1));

}
}
