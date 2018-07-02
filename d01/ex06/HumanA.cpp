// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 21:21:46 by avolgin           #+#    #+#             //
//   Updated: 2018/06/19 22:05:31 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA (std::string name, Weapon &weapon) : _name(name) {

	std::cout << "HumanA created" << std::endl;
	Weapon & tmp = weapon;
	this->_weapon = &tmp;
	return ;
}

HumanA::~HumanA (void) {
	std::cout << "HumanA destroyed" << std::endl;
	return ;
}
void	HumanA::attack(void) {
	std::cout << this->_name << " attacks with his " \
	<< this->_weapon->getType() << std::endl;

}
