// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 17:56:15 by avolgin           #+#    #+#             //
//   Updated: 2018/06/19 20:23:22 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"
#include "Brain.hpp"

Human::Human(void) {
	std::cout << "Human was born" << std::endl;
	Brain Brain1;
	Brain & refer = Brain1;
	this->_address = &refer;
	return ;
}

Human::~Human(void) {
	std::cout << "Human died! NO sorrow." << std::endl;
	return ;
}

std::string	Human::identify(void) {
	return (this->_address->identify());
}

const Brain	&Human::getBrain(void) {
	return *(this->_address);
}

