// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   At.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:54:23 by avolgin           #+#    #+#             //
//   Updated: 2018/06/27 21:09:03 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "A.class.hpp"

A::A(void) {
	return ;
}

A::A(const A & obj) {
	*this = obj;
	return ;
}

A(B const & _ ) {
	return;
}

A(C const & _ ){
	return;
}

A::~A(void) {
	std::cout << "A destructor called" << std::endl;
	return ;
}

A&		A::operator=(A const & src) {
	return *this;
}

std::ostream & operator<<(std::ostream & o, A const & obj) {
	o << "\033[0;32mA\033[0;0m";
	return o;
}
