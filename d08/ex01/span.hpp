// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   span.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:51:04 by avolgin           #+#    #+#             //
//   Updated: 2018/06/29 23:04:10 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef DEFAULT_HPP
# define DEFAULT_HPP

#include <iostream>
#include <vector>

class	span {

public:
	span(unsigned int);
	span(const span &);
	virtual ~span(void);
	int & operator[](unsigned int i)throw(std::exception);
	int operator[](unsigned int i) const throw(std::exception);
	int longestSpan(void)throw(const char*);
	int shortestSpan(void)throw(const char*);
	void addNumber(int n)throw(const char*);
	void addNumber(unsigned int start, unsigned int end, int n)throw(const char*);
	span & operator=(span const &);
private:
	span(void);
	std::vector <int> _vect;
	unsigned int _n;
};

std::ostream & operator<<(std::ostream & o, span const & rhs);

#endif
