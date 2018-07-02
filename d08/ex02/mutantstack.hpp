// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   MutantStack.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:51:04 by avolgin           #+#    #+#             //
//   Updated: 2018/06/29 23:00:34 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>
#include <iterator>

template<typename T>
class   MutantStack {
public:
	MutantStack(void) {
		return;
	};
	typedef typename std::list<T>::iterator         iterator;
	MutantStack(const MutantStack & obj) {
		*this = obj;
	}
	virtual ~MutantStack(void) {
		return;
	}
	MutantStack & operator=(MutantStack const & src) {
		(void)src;
		return *this;
	}
	iterator begin(void) {
		return _list.begin();
	}
	iterator end(void) {
		return _list.end();
	}
	void push(T const & elem) {
		_list.push_back(elem);
	}
	void pop(void) {
		_list.pop_back();
	}
	int size(void) {
		return _list.size();
	}
	T const & top(void)const {
		return _list.back();
	}
	T & top(void) {
		return _list.back();
	}
	bool empty(void) {
		return _list.empty();
	}
	operator std::stack<T>(void)
    {
         std::stack<T>                               stack;
		 iterator it = _list.begin();
		 iterator ite = _list.end();
		 while (it != ite)
	    {
			stack.push(*it);
			it++;
	    }
		 return stack;
	}
private:
	std::list<T> _list;
	int _size;
};

#endif
