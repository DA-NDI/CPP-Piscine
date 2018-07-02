// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PowerFist.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 09:11:42 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 23:35:56 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AWeapon.hpp"
#include "PowerFist.hpp"

PowerFist::PowerFist(std::string const & name, int apcost, int damage)
	:AWeapon("Power Fist", 8, 50) {
	std::string n = name;
    int a = apcost;
    a = 0;
    int d = damage;
    d = 0;
	return ;
}


PowerFist::PowerFist(void)
	:AWeapon("Power Fist", 8, 50) {
	return ;
}


PowerFist::~PowerFist(void) {
	return ;
}

void	PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
