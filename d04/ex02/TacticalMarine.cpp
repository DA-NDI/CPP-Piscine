// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   TacticalMarine.cpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 21:33:19 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 23:31:49 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle" << std::endl;
}
TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & marine) {
	*this = marine;
	return ;
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const &) {
	return (*this);
}

TacticalMarine *TacticalMarine::clone() const {
	TacticalMarine *marine = new TacticalMarine;
	return marine;
}
void TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT !" << std::endl;
}
void TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with bolter *" << std::endl;
}
void TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with chainsword *" << std::endl;
}
