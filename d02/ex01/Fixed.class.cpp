// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 16:43:56 by avolgin           #+#    #+#             //
//   Updated: 2018/06/20 22:02:40 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.class.hpp"
#include <math.h>

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	this->_fixed = 0;
	return ;
}

Fixed::Fixed(int const n) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixed = n << 8;
	return ;
}

Fixed::Fixed(float const n) {
	std::cout << "Float constructor called" << std::endl;
	
	this->_fixed = (int)roundf(n * 256);
	return ;
}

Fixed::Fixed(const Fixed & fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	return ;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed&		Fixed::operator=(Fixed const & rhs) {
	std::cout << "Assignation operator called" << std::endl;

	this->_fixed = rhs.getRawBits();
	return *this;
}

Fixed		Fixed::operator+(Fixed const & rhs) const{
		std::cout << "Addition operator called with " << this->_fixed;
		return Fixed(this->_fixed + rhs.getRawBits());
}

int			Fixed::getRawBits(void) const{
	return this->_fixed;
}

void		Fixed::setRawBits(int const raw) {
	this->_fixed = raw;
}

float   Fixed::toFloat(void) const {
	return float(this->_fixed) / (256);
}

int   Fixed::toInt(void) const {
        return this->_fixed >> 8;
}


std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	if (rhs.getRawBits() & 0xff)
		o << ((float)rhs.getRawBits() / 256);
	else
		o << (rhs.getRawBits() >> 8);
	return o;
}
