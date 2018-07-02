// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 09:00:48 by avolgin           #+#    #+#             //
//   Updated: 2018/06/19 20:22:15 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Brain.hpp"
#include <sstream>

Brain::Brain(void){
	this->_weight = 0;
	this->_amountOfWisdom = 0;
	std::cout << "Brain was born! Born to die" << std::endl;
	return ;
}

Brain::~Brain(void) {
	std::cout << "Brain died. Brainstorm." << std::endl;
	return ;
}

int        Brain::getBrainAge(void) const{
	return this->_age;
}

void        Brain::setWeight(int weight) {
	this->_weight = weight;
}

void		Brain::setAmountOfWisdom(int wisdom) {
	this->_amountOfWisdom = wisdom;
}

std::string    Brain::identify(void) const {
	std::ostringstream ss;
	ss << this;  
	std::string name = ss.str();
	return name;
}
