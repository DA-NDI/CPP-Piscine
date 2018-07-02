// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PlasmaRifle.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 09:11:42 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 23:35:09 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(std::string const & name, int apcost, int damage)
	:AWeapon("Plasma  Rifle", 5, 21) {
	std::string n = name;
	int a = apcost;
	a = 0;
	int d = damage;
	d = 0;
	return ;
}


PlasmaRifle::PlasmaRifle(void)
	:AWeapon("Plasma  Rifle", 5, 21) {
	return ;
}


PlasmaRifle::~PlasmaRifle(void) {
	return ;
}

void	PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
