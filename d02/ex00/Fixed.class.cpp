// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 16:43:56 by avolgin           #+#    #+#             //
//   Updated: 2018/06/20 19:26:45 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.class.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	this->_n = 0;
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

	this->_n = rhs.getRawBits();
	return *this;
}

Fixed		Fixed::operator+(Fixed const & rhs) const{
		std::cout << "Addition operator called with " << this->_n;
		std::cout << "and" << rhs.getValue() << std::endl;
		return Fixed();
}

int			Fixed::getValue(void) const
{
	return this->_n;
}

int			Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_n;
}

void		Fixed::setRawBits(int const raw) {
	this->_n = raw;
}
// std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
// 	o << rhs.getValue();
// 	return o;
// }
