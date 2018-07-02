// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Ct.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:54:23 by avolgin           #+#    #+#             //
//   Updated: 2018/06/27 21:11:37 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "C.class.hpp"

C::C(void) {
	return ;
}

C::C(const C & obj) {
	*this = obj;
	return ;
}

C(B const & _ ) {
	return;
}

C(C const & _ ){
	return;
}

C::~C(void) {
	std::cout << "C destructor called" << std::endl;
	return ;
}

C&		C::operator=(C const & src) {
	return *this;
}

std::ostream & operator<<(std::ostream & o, C const & obj) {
	o << "\033[0;32mC\033[0;0m";
	return o;
}
