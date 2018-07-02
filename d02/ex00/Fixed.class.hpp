// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 16:43:33 by avolgin           #+#    #+#             //
//   Updated: 2018/06/20 19:27:53 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class	Fixed {

public:
	Fixed(void);
	Fixed(const Fixed & fixed);
	~Fixed(void);

	Fixed & operator=(Fixed const & rhs);
	Fixed   operator+(Fixed const & rhs) const;
	int     getRawBits(void) const;
	void    setRawBits(int const raw);

private:

	int	_n;
	static const int _fractBits = 8;
	int		getValue(void) const;
};

//std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
