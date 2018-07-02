// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 10:42:24 by avolgin           #+#    #+#             //
//   Updated: 2018/06/19 12:33:05 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _type("Dead") {
	std::cout << "Zombak created" << std::endl;
	this->_name = name;
	return ;
}

Zombie::~Zombie(void) {
	std::cout << "Zombak `" << this->_name << "` starved to death" << std::endl;
	return ;
}

void	Zombie::announce(void) {
	std::cout << "Name: " << Zombie::getName() << ";Type: " << \
	Zombie::getType() << " What i need: Braiiiiiiinnnssss..." << std::endl;
}

void	Zombie::setType(std::string type)
{
	this->_type = type;
}

std::string	Zombie::getType(void)
{
	return this->_type;
}

std::string	Zombie::getName(void)
{
	return this->_name;
}
