// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   MutantStackt.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:54:23 by avolgin           #+#    #+#             //
//   Updated: 2018/06/29 21:56:19 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "mutantstack.hpp"

template<typename T>
MutantStack<T>::MutantStack(void) {//: std::stack<T>(std::vector<T>()) {
	return;
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack & obj) {
	*this = obj;
	return ;
}

template<typename T>
MutantStack<T>::~MutantStack(void) {
	std::cout << "MutantStack destructor called" << std::endl;
	return ;
}

template<typename T>
MutantStack<T>&		MutantStack<T>::operator=(MutantStack<T> const & src) {
	return *this;
}

// std::ostream & operator<<(std::ostream & o, MutantStack const & obj) {
// 	o << "\033[0;32mMutantStack text\033[0;0m";
// 	return o;
//}
