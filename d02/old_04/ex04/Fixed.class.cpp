// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 16:43:56 by avolgin           #+#    #+#             //
//   Updated: 2018/06/21 15:42:25 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.class.hpp"
#include <math.h>

Fixed::Fixed(void) {
	this->_fixed = 0;
	return ;
}

Fixed::Fixed(int const n) {
	this->_fixed = n << 8;
	return ;
}

Fixed::Fixed(float const n) {
	this->_fixed = (int)roundf(n * 256);
	return ;
}

Fixed::Fixed(const Fixed & fixed) {
	*this = fixed;
	return ;
}

Fixed::~Fixed(void) {
	return ;
}

Fixed&		Fixed::operator=(Fixed const & rhs) {
	this->_fixed = rhs.getRawBits();
	return *this;
}

Fixed		Fixed::operator+(Fixed const & rhs) const{
	if (this->getRawBits() & 0xFF && rhs.getRawBits() & 0xFF)
		return Fixed(this->toFloat() + rhs.toFloat());
	else if (!(this->getRawBits() & 0xFF) && !(rhs.getRawBits() & 0xFF))
		return  Fixed(this->toInt() + rhs.toInt());
	if (this->getRawBits() & 0xFF && !(rhs.getRawBits() & 0xFF))
		return Fixed(this->toFloat() + rhs.toInt());
	else if (!(this->getRawBits() & 0xFF) && (rhs.getRawBits() & 0xFF))
		return  Fixed(this->toInt() + rhs.toFloat());

	else
		return Fixed(0);
}

Fixed		Fixed::operator-(Fixed const & rhs) const{
	if (this->getRawBits() & 0xFF && rhs.getRawBits() & 0xFF)
		return Fixed(this->toFloat() - rhs.toFloat());
	else if (!(this->getRawBits() & 0xFF) && !(rhs.getRawBits() & 0xFF))
		return  Fixed(this->toInt() - rhs.toInt());
	if (this->getRawBits() & 0xFF && !(rhs.getRawBits() & 0xFF))
		return Fixed(this->toFloat() - rhs.toInt());
	else if (!(this->getRawBits() & 0xFF) && (rhs.getRawBits() & 0xFF))
		return  Fixed(this->toInt() - rhs.toFloat());

	else
		return Fixed(0);
}

Fixed		Fixed::operator*(Fixed const & rhs) const{
	if (this->getRawBits() & 0xFF && rhs.getRawBits() & 0xFF)
		return Fixed(this->toFloat() * rhs.toFloat());
	else if (!(this->getRawBits() & 0xFF) && !(rhs.getRawBits() & 0xFF))
		return  Fixed(this->toInt() * rhs.toInt());
	if (this->getRawBits() & 0xFF && !(rhs.getRawBits() & 0xFF))
		return Fixed(this->toFloat() * rhs.toInt());
	else if (!(this->getRawBits() & 0xFF) && (rhs.getRawBits() & 0xFF))
		return  Fixed(this->toInt() * rhs.toFloat());

	else
		return Fixed(0);
}

Fixed		Fixed::operator++(int) { //post increment

	Fixed tmp = *this;
	this->_fixed += 1;
	return tmp;
}

Fixed		&Fixed::operator++(void) { // pre increment
	this->_fixed += 1;
	return *this;
}


Fixed		Fixed::operator--(int) { //post decrement

	Fixed tmp = *this;
	this->_fixed -= 1;
	return tmp;
}

Fixed		&Fixed::operator--(void) { // pre decrement
	this->_fixed -= 1;
	return *this;
}

Fixed		Fixed::operator/(Fixed const & rhs) const{
	if (this->getRawBits() & 0xFF && rhs.getRawBits() & 0xFF)
		return Fixed(this->toFloat() / rhs.toFloat());
	else if (!(this->getRawBits() & 0xFF) && !(rhs.getRawBits() & 0xFF))
		return  Fixed(this->toInt() / rhs.toInt());
	if (this->getRawBits() & 0xFF && !(rhs.getRawBits() & 0xFF))
		return Fixed(this->toFloat() / rhs.toInt());
	else if (!(this->getRawBits() & 0xFF) && (rhs.getRawBits() & 0xFF))
		return  Fixed(this->toInt() / rhs.toFloat());
	else
		return Fixed(0);
}

bool    Fixed::operator>(Fixed const & rhs) const {
	return (this->getRawBits() > rhs.getRawBits());
}

bool    Fixed::operator<(Fixed const & rhs) const {
	return (this->getRawBits() < rhs.getRawBits());
}

bool    Fixed::operator==(Fixed const & rhs) const {
	return (this->getRawBits() == rhs.getRawBits());
}

bool    Fixed::operator!=(Fixed const & rhs) const {
	return (this->getRawBits() != rhs.getRawBits());
}

bool    Fixed::operator>=(Fixed const & rhs) const {
	return (this->getRawBits() >= rhs.getRawBits());
}

bool    Fixed::operator<=(Fixed const & rhs) const {
	return (this->getRawBits() <= rhs.getRawBits());
}

int			Fixed::getRawBits(void) const{
	return this->_fixed;
}

void		Fixed::setRawBits(int const raw) {
	this->_fixed = raw;
}

float   Fixed::toFloat(void) const {
	return float(this->_fixed) / 256;
}

int   Fixed::toInt(void) const {
        return this->_fixed >> 8;
}


std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	if (rhs.getRawBits() & 0xff)
		o << rhs.toFloat();
	else
		o << rhs.toInt();
	return o;
}

Fixed const & Fixed::max(Fixed const & rhs1, Fixed const & rhs2) {
	if (rhs1 > rhs2)
		return rhs1;
	else
		return rhs2;

}

Fixed & Fixed::max(Fixed & rhs1, Fixed & rhs2) {//non const overloaded
	if (rhs1 > rhs2)
		return rhs1;
	else
		return rhs2;

}

Fixed const & Fixed::min(Fixed const & rhs1, Fixed const & rhs2) {
	if (rhs1 > rhs2)
		return rhs2;
	else
		return rhs1;
}

Fixed & Fixed::min(Fixed & rhs1, Fixed & rhs2) { //non const overloaded
	if (rhs1 > rhs2)
		return rhs2;
	else
		return rhs1;
}
