// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Arrayt.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:54:23 by avolgin           #+#    #+#             //
//   Updated: 2018/06/28 18:24:16 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Array.hpp"

T::Array(void) :
	_n(0){// creates empty array
	return new T();
}

T::Array(unsigned int n) {//creates an array of n elements,
//initialized by default.	
	return new T[n];
}

T::Array(const Array & obj) :
	_elem{new T[_size]},
	_size(obj.size)
{
		for (int i = 0; i < _size; i++)
		{
			_elem[i] = a.elem[i];
		}
	*this = obj;
	return ;
}

T::~Array(void) {
	std::cout << "Array destructor called" << std::endl;
	delete []elem;
	return ;
}

T&		Array::operator=(Array const & src) {
	return *this;
}

// std::ostream & operator<<(std::ostream & o, T const & obj) {
// 	o << "\033[0;32mArray text\033[0;0m";
// 	return o;
}
