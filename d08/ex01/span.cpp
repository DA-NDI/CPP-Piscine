// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   spant.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:54:23 by avolgin           #+#    #+#             //
//   Updated: 2018/06/29 23:04:33 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "span.hpp"

span::span(void){
	return ;
}

span::span(unsigned int n) : _n(n){
	return ;
}

span::span(const span & obj) {
	*this = obj;
	return ;
}

void span::addNumber(unsigned int start, unsigned int end, int n) throw(const char*){
	if (end > _n || start > _n \
		|| end - start > _n || end < start)
		throw ("\033[0;31mException of range adding\033[0m");
	else if(_vect.size() >= end)
	{
	std::fill(this->_vect.begin() + start, this->_vect.begin() + end, n);
	}
	else if (_vect.size() < end && _n >= end)
	{
		_vect.resize(end);
		std::fill(_vect.begin() + start, _vect.begin() + end, n);
	}
	else
		std::cout << "Interesting case" << std::endl;
}

int & span::operator[](unsigned int i)throw(std::exception){
		if (i >= _vect.size())
			throw std::out_of_range("\033[0;31mindex is out of range\033[0m");
		return _vect[i];
	}
int span::operator[](unsigned int i) const throw(std::exception){
		if (i >+ _vect.size())
			throw std::out_of_range("index is out of range");
		return _vect[i];
	}

int span::longestSpan(void) throw(const char *){
	if (_n == 0 || _n == 1 || _vect.size() == 0 || _vect.size() == 1)
		throw("\033[0;31mLong. Only one or no elements\033[0m");
	return *(std::max_element(_vect.begin(), _vect.end())) -	\
		*(std::min_element(_vect.begin(), _vect.end()));
}

int span::shortestSpan(void) throw(const char *){
	if (_n == 0 || _n == 1 || _vect.size() == 0 || _vect.size() == 1)
		throw("\033[0;31mShort. Contains only one or no elements\033[0m");
	std::vector<int> tmp = _vect;
	std::sort(tmp.begin(), tmp.end());
	tmp.erase( unique( tmp.begin(), tmp.end() ), tmp.end() );
	return tmp[1]- tmp[0];
}

void span::addNumber(int n) throw(const char*){
	if (this->_vect.size() == _n)
		throw ("\033[0;31mThere are already N of elements\033[0m");
	_vect.push_back(n);
}

span::~span(void) {
	return ;
}

span&		span::operator=(span const &) {
	return *this;
}

std::ostream & operator<<(std::ostream & o, span const &) {
	o << "\033[0;32Do nothing yet.\033[0;0m";
	return o;
}
