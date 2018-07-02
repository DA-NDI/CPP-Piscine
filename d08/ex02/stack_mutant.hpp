// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   MutantStack.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:51:04 by avolgin           #+#    #+#             //
//   Updated: 2018/06/29 21:23:22 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>


//template<typename T>
//  class MutantStack {
template<typename T>
class   MutantStack : public std::stack<T>{
public:
	MutantStack(void) {
		MutantStack::iterator = 0;
		return;
	};
	MutantStack(const MutantStack & obj) {
		*this = obj;
	}
	virtual ~MutantStack(void) {
		return;
	}
	MutantStack & operator=(MutantStack const & src) {
		return *this;
	}
	int begin(void) {
		return 1;
	}
	int begin(void) {
		return 1;
	}
	static int	iterator;
	// bool push(T elem);
	// T pop(void);
	// bool empty(void);
	// unsigned int size(void);
	// T top(char x) const;
private:
	std::list<T> _list;
	int _size;
};
template<typename T>
int MutantStack<T>::iterator = 0;
//std::ostream & operator<<(std::ostream & o, MutantStack const & rhs);

#endif
