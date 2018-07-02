// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AssaultTerminator.cpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 21:33:19 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 23:31:14 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl;
}
AssaultTerminator::~AssaultTerminator() {
	std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & marine) {
	*this = marine;
	return ;
}

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const &) {
//	if (marine == nullptr)
//		return (*this);
	return (*this);
}

AssaultTerminator *AssaultTerminator::clone() const {
	AssaultTerminator *marine = new AssaultTerminator;
	return marine;
}
void AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}
void AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}
void AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;
}
