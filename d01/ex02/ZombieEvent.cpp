// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 10:58:33 by avolgin           #+#    #+#             //
//   Updated: 2018/06/19 12:14:55 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {
	std::cout << "Zombie event created" << std::endl;
	return ;
}

ZombieEvent::~ZombieEvent(void) {
	std::cout << "Zombie event destroyed" << std::endl;
	return ;
}

void    ZombieEvent::setZombieType(Zombie *zombak, std::string type) {
	zombak->setType(type);
}

Zombie* ZombieEvent::newZombie(std::string name) {
	Zombie* zombac = new Zombie(name);
	return (zombac);
}
