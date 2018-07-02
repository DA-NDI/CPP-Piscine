// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 09:00:48 by avolgin           #+#    #+#             //
//   Updated: 2018/06/19 10:29:42 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"

Pony::Pony(int age) : _ponyAge(age) {
	this->_isHorn = 0;
	this->_amountOfRainbow = 1;
	this->_whatDoesThePonySays = "I'm a little pony. I'm amazing. Give me a lick";
	Pony::_nbPonys += 1;
	std::cout << "Pony was born! Born to die" << std::endl;
	return ;
}

Pony::~Pony(void) {
	std::cout << "Pony died. Poor pony" << std::endl;
	Pony::_nbPonys -= 1;
	return ;
}

int        Pony::getPonyAge(void) const{
	return this->_ponyAge;
}

int        Pony::getNbPonys(void) {
	return Pony::_nbPonys;
}

void        Pony::setHorn(bool horn) {
	this->_isHorn = horn;
}

void		Pony::setAmountOfRainbow(int rainbow) {
	this->_amountOfRainbow = rainbow;
}

void        Pony::displayInfo(void) const {
	std::cout << "Pony Age: " << Pony::getPonyAge() << ";Is Pony UniPony?:" \
	<< this->_isHorn << ";Number of ponies:" << Pony::getNbPonys() \
	<< ";Amount of rainbow:" << this->_amountOfRainbow << std::endl << \
	"What does the pony says?" << this->_whatDoesThePonySays << std::endl;
}

std::string Pony::getWhatDoesThePonySays(void) const {
	return Pony::_whatDoesThePonySays;
}

int Pony::_nbPonys = 0;
