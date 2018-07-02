// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: oltkache <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 21:23:10 by oltkache          #+#    #+#             //
//   Updated: 2018/06/23 21:23:11 by oltkache         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Weapon.hpp"

Weapon::Weapon(void) {}

Weapon::~Weapon(void) {}

Weapon::Weapon(int x, int y) : GameEntity(x, y) {
	setType("^");
}

Weapon::Weapon(Weapon const & a) {
	*this = a;
}

void Weapon::move(void) {}

void Weapon::move(WINDOW*	_window, int p_y, GameEntity * game, int d) {
	if (game->takeDamage(_startX, _startY, 5, game, _window))
	{
		setY(0);
		return;
	}
	int n = game->getHp();
	n = 0;
	if (_startY + 1 != p_y || _startY == 0)
		mvwaddstr(_window, _startY + d, _startX, " ");
	mvwaddstr(_window, _startY, _startX, "^");
	_startY -= d;
	 if (_startY == 0)
	 	mvwaddstr(_window, _startY + d, _startX, " ");
}

void Weapon::makeDamage(GameEntity *ship, GameEntity *player) {
	if (((ship->getX() - Weapon::getX()) < 3 && (ship->getY() - Weapon::getY()) < 3) && (ship->getX() - Weapon::getX()) > - 3 && (ship->getY() - Weapon::getY()) > -3)
	{
		player->addScore(42);
	}
}


Weapon & Weapon::operator=(Weapon const & rhs) {
	_type = rhs.getType();
	_startY = rhs.getY();
	_startX = rhs.getX();
	return (*this);
}
