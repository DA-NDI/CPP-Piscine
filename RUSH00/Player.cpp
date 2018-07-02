// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Player.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: oltkache <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 22:19:27 by oltkache          #+#    #+#             //
//   Updated: 2018/06/23 22:19:28 by oltkache         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Player.hpp"
#include "Weapon.hpp"

Player::Player(void) {}

Player::~Player(void) {}

Player::Player(int x, int y) : GameEntity(x, y) {
	this->_score = 0;
	setType("-@-");
}

Player::Player(Player const & a) {
	*this = a;
}

void Player::move(void) {
	return ;
}

void Player::moves(WINDOW*	_window, int k, int maxWidth, int maxHeight, const char* a) {
	mvwaddstr(_window, _startY, _startX, "   ");
	if (k == KEY_UP && _startY - 1 > 0)
		setY(_startY - 1);
	else if (k == KEY_DOWN && _startY + 1 < maxHeight - 1)
		setY(_startY + 1);
	else if (k == KEY_LEFT && _startX - 2 > 0)
		setX(_startX - 1);
	else if (k == KEY_RIGHT && _startX + 5 < maxWidth)
		setX(_startX + 1);
	a = "1";
}

Player & Player::operator=(Player const & a) {
	_startX = a.getX();
	_startY = a.getY();
	_type = a.getType();
	return (*this);
}
