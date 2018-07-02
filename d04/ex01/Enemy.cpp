// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 09:11:42 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 11:40:08 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
	: _hp(hp), _type(type) {
	return ;
}

Enemy::Enemy(void) {
	return ;
}

Enemy::~Enemy(void) {
	return ;
}

int Enemy::getHP(void) const{
	return Enemy::_hp;
}

void Enemy::takeDamage(int dmg) {
	if (dmg < 0)
		return ;
	if ((this->getHP() - dmg) >= 0)
		Enemy::_hp -= dmg;
	else
		Enemy::_hp = 0;
}

std::string Enemy::getType() const {
	return Enemy::_type;
}
