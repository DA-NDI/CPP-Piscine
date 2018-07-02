// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   EnemieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 10:58:33 by avolgin           #+#    #+#             //
//   Updated: 2018/06/24 03:14:06 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "EnemyHorde.hpp"

EnemyHorde::EnemyHorde(std::string type, int n) {
	std::srand(std::time(0));
	this->_type = type;
	this->_n = n;
//	this->_n = 5;
	if (type == "Enemy") 
	this->_p = new Enemy[_n];
	else if(type == "Asteroid")
		return ;
	else if(type == "Stars")
		return ;
	return ;
}

int 	EnemyHorde::getNumberEnemies(void) {
	return this->_n;
}

void	EnemyHorde::delEnemy(GameEntity *entity) {
	delete entity;
}

Enemy* 	EnemyHorde::getEnemies(void) {
	return _p;
}


EnemyHorde::~EnemyHorde(void) {
	std::cout << "Enemie horde destroyed" << std::endl;
	if (this->_n > 0)
		delete [] this->_p;
	return ;
}

void    EnemyHorde::setEnemyType(GameEntity *enemy, std::string name) {
	enemy->setType(name);
}

int		EnemyHorde::randomNumb(void)
{
    return (std::rand() % 100);
}
