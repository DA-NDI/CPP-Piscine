// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 16:43:33 by avolgin           #+#    #+#             //
//   Updated: 2018/06/20 20:25:12 by avolgin          ###   ########.fr       //
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
	int     getRawBits(void) const;
	void    setRawBits(int const raw);

private:

	int	_fixed;
	static const int _fractBits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
