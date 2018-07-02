// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bt.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:54:23 by avolgin           #+#    #+#             //
//   Updated: 2018/06/27 21:10:43 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "B.class.hpp"

B::B(void) {
	return ;
}

B::B(const B & obj) {
	*this = obj;
	return ;
}

B(B const & _ ) {
	return;
}

B(C const & _ ){
	return;
}

B::~B(void) {
	std::cout << "B destructor called" << std::endl;
	return ;
}

B&		B::operator=(B const & src) {
	return *this;
}

std::ostream & operator<<(std::ostream & o, B const & obj) {
	o << "\033[0;32mB\033[0;0m";
	return o;
}
