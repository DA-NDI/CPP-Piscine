// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 16:43:56 by avolgin           #+#    #+#             //
//   Updated: 2018/06/22 22:49:52 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Nobody.hpp"
#include "Victim.hpp"

Nobody::Nobody(std::string name) : _name(name) {
	std::cout << "\033[0;37mEmpty text.\033[0;0m" << std::endl;
	return ;
}

Nobody::Nobody(void) : _name("RandZog") {
	std::cout << "\033[0;37mFulled text.\033[0;0m" << std::endl;
	return ;
}

Nobody::Nobody(const Nobody & victim) {
	*this = victim;
	return ;
}

Nobody::~Nobody(void) {
	std::cout << "\033[1;37mEverybody ends\033[0;0m" << std::endl;
	return ;
}

Nobody&		Nobody::operator=(Nobody const & ft) {
	this->_name = ft.getName();
	return *this;
}

std::string		Nobody::getName(void) const{
	return this->_name;
}

void	Nobody::setName(std::string name){
	this->_name = name;
}

void Nobody::getPolymorphed(void) const {
	std::cout << this->getName() << " has been turned into a somebody !" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Nobody const & rhs) {
   o << "\033[0;37mI'm " << rhs.getName() << " and I like nobody !"    \
      << "\033[0;0m" << std::endl;
   return o;
}
