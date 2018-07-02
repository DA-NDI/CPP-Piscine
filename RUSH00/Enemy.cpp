// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: oltkache <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 16:59:59 by oltkache          #+#    #+#             //
//   Updated: 2018/06/23 16:59:59 by oltkache         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Enemy.hpp"
#include <unistd.h>


Enemy::Enemy(int x, int y) : GameEntity(x, y) {
// this->setType("Enemy");
	// std::srand(std::time(0));
// setW();
return ;
}
Enemy::Enemy(void) {
	return ;
}
Enemy::~Enemy(void) {
return ;
}

Enemy::Enemy(Enemy const & src) {
*this = src;
	return;
}

void Enemy::move(void) {
return ;
}

// Weapon getW(void){
// 	return (_w);
// }

void Enemy::moves(WINDOW*	_window, int k, int maxWidth, int maxHeight, const char *a) {
	chtype b = mvwinch(_window, _startY, _startX);
	if (b != '-' && b != '@')
		mvwaddstr(_window, _startY, _startX, a);
	// b = 0;
	// std::srand(std::time(0));
	// int y;
//	if (k != 5)
//		return;
//	usleep(3000);
	if (_startY + 2 < maxHeight) {
		// while (1) {
		// 	y =  std::rand() % 10000;
		// 	if (y == 1)
		// 		break;
		// }
		setY(_startY + 1);
	}
	else
	{
		k = randomNumb() % (maxWidth - 3);
		k = (k > 0) ? k : 3;
		setY(1);
		setX(k);
	}
	std::string str = getType();
	char *st = &str[0];
	mvwaddstr(_window, _startY, _startX, st);
}

void Enemy::attack(GameEntity & entity) {
	entity.takeDamage(this->getX(), this->getY(), 10, &entity, 0);
//ncurses.FireBullet(this);
}

unsigned int		Enemy::randomNumb(void)
{
    return (std::rand() % 300);
}

Enemy & Enemy::operator=(Enemy const & src) {
this->setType(src.getType());
this->setX(src.getX());
this->setY(src.getY());
return *this;
}
