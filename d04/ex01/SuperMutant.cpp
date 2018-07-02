// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperMutant.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 09:11:42 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 23:37:06 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(int hp, std::string const & type)
	:Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	int hpp = hp;
	hpp = 0;
	std::string ty = type;
	return ;
}

SuperMutant::~SuperMutant(void) {
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

std::string SuperMutant::getType(void) const{
	return "SuperMutant";
}


void SuperMutant::takeDamage(int dmg) {
	if (dmg < 0)
		return ;
	dmg -= 3;
	if ((SuperMutant::getHP() - dmg) >= 0)
	{
		this->_hpp = SuperMutant::getHP();
		this->_hpp -= dmg;
	}
	else
		this->_hpp = 0;
}
