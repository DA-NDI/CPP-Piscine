// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 20:58:37 by avolgin           #+#    #+#             //
//   Updated: 2018/06/19 22:04:49 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type){
	std::cout << "Weapon created" << std::endl;
	return ;
}
Weapon::~Weapon(void) {
	std::cout << "Weapon destroyed" << std::endl;
	return ;
}
const std::string & Weapon::getType(void) const
{
	return this->_type;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
