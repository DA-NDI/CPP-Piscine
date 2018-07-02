// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Child.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:54:23 by avolgin           #+#    #+#             //
//   Updated: 2018/06/25 19:02:36 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Child.hpp"

Child::Child(void) {
	return ;
}

Child::Child(const Child & obj) {
	*this = obj;
	return ;
}

Child::~Child(void) {
	std::cout << "Child" << std::endl;
	return ;
}

Child&		Child::operator=(Child const & src) {
	return *this;
}

std::ostream & operator<<(std::ostream & o, Child const & obj) {
	o << "\033[0;32mChild text\033[0;0m";
	return o;
}
