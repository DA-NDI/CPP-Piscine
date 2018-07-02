// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Default.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:54:23 by avolgin           #+#    #+#             //
//   Updated: 2018/06/25 19:07:56 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Default.class.hpp"

Defaul::Defaul(void) {
	return ;
}

Defaul::Defaul(const Defaul & obj) {
	*this = obj;
	return ;
}

Defaul::~Defaul(void) {
	std::cout << "Defaul destructor called" << std::endl;
	return ;
}

Defaul&		Defaul::operator=(Defaul const & src) {
	return *this;
}

std::ostream & operator<<(std::ostream & o, Defaul const & obj) {
	o << "\033[0;32mDefaul text\033[0;0m";
	return o;
}
