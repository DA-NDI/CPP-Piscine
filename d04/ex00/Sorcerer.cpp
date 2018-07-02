// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 16:43:56 by avolgin           #+#    #+#             //
//   Updated: 2018/06/22 22:47:42 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << "\033[0;32m" << this->getName()			 \
			  << ", " << this->getTitle() << ", is born !" \
	<< "\033[0;0m" << std::endl;
	return ;
}

Sorcerer::Sorcerer(const Sorcerer & fragtrap) {
	*this = fragtrap;
	return ;
}

Sorcerer::~Sorcerer(void) {
	std::cout << "\033[0;31m" << this->getName()\
<< ", " << this->getTitle() << ", " << "is dead. \033[0;0mConsequences will never be the same !"\
<< std::endl;
	return ;
}

Sorcerer&		Sorcerer::operator=(Sorcerer const & ft) {
	this->_name = ft.getName();
	this->_title = ft.getTitle();
	return *this;
}

std::string		Sorcerer::getName(void) const{
	return this->_name;
}

std::string		Sorcerer::getTitle(void) const{
	return this->_title;
}

void Sorcerer::polymorph(Victim const & victim) const {
	victim.getPolymorphed();
}

void Sorcerer::polymorph(Peon const & pion) const {
	pion.getPolymorphed();
}


void Sorcerer::polymorph(Nobody const & nobody) const {
	nobody.getPolymorphed();
}


void	Sorcerer::setName(std::string name){
	this->_name = name;
}

void	Sorcerer::setTitle(std::string title){
	this->_title = title;
}


std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs) {
	o << "\033[0;32mI am " << rhs.getName()					   \
	  << ", " << rhs.getTitle() << ", " << "and I like ponies !"	\
	  << "\033[0;0m" << std::endl;
	return o;
}
