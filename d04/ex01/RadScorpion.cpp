// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RadScorpion.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 09:11:42 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 23:36:33 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(int hp, std::string const & type)
	:Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
	hp = 0;
	std::string typ = type;
	return ;
}

RadScorpion::RadScorpion(void)
	:Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
	return ;
}

std::string RadScorpion::getType(void) const{
	return 	"RadScorpion";

}


RadScorpion::~RadScorpion(void) {
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}
