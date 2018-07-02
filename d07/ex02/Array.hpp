// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Array.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:51:04 by avolgin           #+#    #+#             //
//   Updated: 2018/06/28 22:06:30 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class	Array {

public:
	Array(void) : _size(0){
		_elem = 0;
	}
	Array(unsigned int n) : _size(n){
		_elem = new T[n];
	}
	Array(const Array & obj) :
		_elem(new T[obj.size()]),
		_size(obj.size())
	{
		for (unsigned int i = 0; i < _size; i++)
    		_elem[i] = obj._elem[i];
    	*this = obj;
    	return ;
	}
	T & operator[](unsigned int i)throw(std::exception){
		if (i >= _size)
			throw std::out_of_range("index is out of range");
		return _elem[i];
	}
	T operator[](unsigned int i) const throw(std::exception){
		if (i > _size)
			throw std::out_of_range("index is out of range");
		return _elem[i];
	}
	virtual ~Array(void) {
		delete[]_elem;
		return;
	}
	unsigned int size(void)const {
		return this->_size;
	}
	Array<T> & operator=(Array const & src) {
		T * tmp = new T[src.size()];
		for (unsigned int i  = 0; i < src.size() ; i++)
			tmp[i] = src._elem[i];
		delete []_elem;
		_elem = 0;
		_size = src.size();
		_elem = tmp;
		return *this;
	}
private:
	T* _elem;
	unsigned int _size;
};

#endif
