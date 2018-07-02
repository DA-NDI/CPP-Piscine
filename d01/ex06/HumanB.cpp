// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 21:21:46 by avolgin           #+#    #+#             //
//   Updated: 2018/06/19 22:05:10 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB (std::string name) : _name(name) {

	std::cout << "HumanB created" << std::endl;
	return ;
}

HumanB::~HumanB (void) {
	std::cout << "HumanB destroyed" << std::endl;
	return ;
}
void	HumanB::attack(void) {
	std::cout << this->_name << " attacks with his " \
	<< this->_weapon->getType() << std::endl;

}

void	HumanB::setWeapon(Weapon &weapon) {
	Weapon & tmp = weapon;
	this->_weapon = &tmp;
}
