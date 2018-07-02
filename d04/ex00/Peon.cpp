// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 16:43:56 by avolgin           #+#    #+#             //
//   Updated: 2018/06/22 22:58:56 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Peon.hpp"
#include "Victim.hpp"

Peon::Peon(std::string name) : _name(name) {
	std::cout << "\033[0;35mZog zog.\033[0;0m" << std::endl;
	return ;
}

Peon::Peon(void) : _name("RandZog") {
	std::cout << "\033[0;35mZog zog.\033[0;0m" << std::endl;
	return ;
}

Peon::Peon(const Peon & victim) {
	*this = victim;
	return ;
}

Peon::~Peon(void) {
	std::cout << "\033[1;31mBleuark...\033[0;0m" << std::endl;
	return ;
}

Peon&		Peon::operator=(Peon const & ft) {
	this->_name = ft.getName();
	return *this;
}

std::string		Peon::getName(void) const{
	return this->_name;
}

void	Peon::setName(std::string name){
	this->_name = name;
}

void Peon::getPolymorphed(void) const {
	std::cout << this->getName() << " has been turned into a pinky pony !" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Peon const & rhs) {
   o << "\033[0;32mI'm " << rhs.getName() << " and I like otters !"    \
      << "\033[0;0m" << std::endl;
   return o;
}
