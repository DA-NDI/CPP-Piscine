// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 16:43:56 by avolgin           #+#    #+#             //
//   Updated: 2018/06/22 23:17:49 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name) {
	std::cout << "\033[0;34mSome random victim called " << Victim::getName() \
		<< " just popped !\033[0;0m" << std::endl;
	return ;
}

Victim::Victim(void) : _name(Victim::getName()) {
	std::cout << "\033[0;34mSome random victim called Joe" << Victim::getName() \
		<< " just popped !\033[0;0m" << std::endl;
	return ;
}

Victim::Victim(const Victim & victim) {
	*this = victim;
	return ;
}

Victim::~Victim(void) {
	std::cout << "\033[0;31mVictim " << Victim::getName()				\
<< " just died for no apparent reason !\033[0;0m" << std::endl;
	return ;
}

Victim&		Victim::operator=(Victim const & ft) {
	this->_name = ft.getName();
	return *this;
}

std::string		Victim::getName(void) const{
	return this->_name;
}

void	Victim::setName(std::string name){
	this->_name = name;
}

void Victim::getPolymorphed(void) const {
	std::cout << this->getName() << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs) {
	o << "\033[0;32mI'm " << rhs.getName() << " and I like otters !"	\
	  << "\033[0;0m" << std::endl;
	return o;
}
