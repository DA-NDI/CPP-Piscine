// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   GameEntity.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: oltkache <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 14:43:50 by oltkache          #+#    #+#             //
//   Updated: 2018/06/23 14:43:51 by oltkache         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

// #include <iostrem>
#include "GameEntity.Interface.hpp"

GameEntity::GameEntity(void) {}

GameEntity::GameEntity(int x, int y) : _startX(x), _startY(y), _hp(100), _state(1) {
}

GameEntity::~GameEntity(void) {}

GameEntity::GameEntity(GameEntity const & a) {
	*this = a;
	return ;
}

std::string	GameEntity::getType(void) const {
	return (_type);
}

int GameEntity::getX(void) const {
	return (_startX);
}

int GameEntity::getY(void) const {
	return (_startY);
}

// int static GameEntity::getMaxBullet(void) {
// 	return (_maxBullet);
// }



int GameEntity::getHp(void) const {
	return (_hp);
}

void GameEntity::setX(unsigned int x) {
	_startX = x;
}

void GameEntity::setY(unsigned int y) {
	_startY = y;
}

void GameEntity::setType(std::string type) {
	_type = type;
}

void GameEntity::addHp(int n) {
	this->_hp += n;
}

int GameEntity::checkState(void)const {
	return this->_state;
}

bool GameEntity::takeDamage(int x, int y, int dmg, GameEntity * src, WINDOW* window) {
	static GameEntity* game;
	chtype b = mvwinch(window, x, y + 1);
	if (b == '=' || b == '|')
	{
		mvwaddstr(window, _startY, _startX, "OK");
	}
	if (x == src->getX() && y == src->getY()) 
	{
		if (game == src)
			return (1);
		game = src;
		_state = 0;
		_hp = (_hp - dmg >= 0) ? _hp - dmg : 0;
//		delete src3;
		return (1);
	}
	else
		return (0);
}


int  GameEntity::getScore(void) {
	return this->_score;
}

void   GameEntity::addScore(int n ) {
	this->_score += n;
}

void GameEntity::moves(WINDOW*, int, int, int, const char *) {
	return ;
}

	
GameEntity & GameEntity::operator=(GameEntity const & rhs) {
	_startX = rhs.getX();
	_startY = rhs.getY();
	_type = rhs.getType();
	return (*this);
}

// void GameEntity::display(WINDOW * wind) const {
// //	mvwaddstr(wind, getY(), getX(), getType());
// 	if (wind == nullptr)
// 		return;
// }
