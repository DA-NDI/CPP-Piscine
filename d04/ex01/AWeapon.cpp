// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWeapon.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 09:11:42 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 23:33:40 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
	: _name(name), _dmg(damage), _apcost(apcost) {
	return ;
}

AWeapon::AWeapon(void) {
	return ;
}

AWeapon::~AWeapon(void) {
	return ;
}

std::string AWeapon::getName(void) const{
	return AWeapon::_name;
}

int AWeapon::getAPCost(void) const{
	return AWeapon::_apcost;
}

int AWeapon::getDamage(void) const{
	return AWeapon::_dmg;
}

