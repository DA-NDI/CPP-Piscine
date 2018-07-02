// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 16:43:33 by avolgin           #+#    #+#             //
//   Updated: 2018/06/21 15:36:30 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class	Fixed {

public:
	Fixed(void);
	Fixed(int const n);
	Fixed(float const n);
	Fixed(const Fixed & fixed);
	~Fixed(void);
	float	toFloat(void) const;
	int		toInt(void) const;
	Fixed & operator=(Fixed const & rhs);
	Fixed   operator+(Fixed const & rhs) const;
	Fixed   operator-(Fixed const & rhs) const;
	Fixed    operator++(int);
	Fixed &  operator++(void);
	Fixed    operator--(int);
	Fixed &  operator--(void);
	Fixed   operator*(Fixed const & rhs) const;
	Fixed   operator/(Fixed const & rhs) const;
	int     getRawBits(void) const;
	void    setRawBits(int const raw);
	bool	operator>(Fixed const & rhs) const;
	bool	operator<(Fixed const & rhs) const;
	bool	operator==(Fixed const & rhs) const;
	bool	operator!=(Fixed const & rhs) const;
	bool	operator>=(Fixed const & rhs) const;
	bool	operator<=(Fixed const & rhs) const;
	static Fixed const & min(Fixed const & rhs1, Fixed const & rhs2);
	static Fixed const & max(Fixed const & rhs1, Fixed const & rhs2);
	static Fixed & min(Fixed & rhs1, Fixed & rhs2);
	static Fixed & max(Fixed & rhs1, Fixed & rhs2);

private:

	int	_fixed;
	static const int _fractBits = 8;
};


std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
