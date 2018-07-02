// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Stack.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/21 22:04:14 by avolgin           #+#    #+#             //
//   Updated: 2018/06/21 22:04:20 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Stack.class.hpp"

Stack::Stack(void) {
	Stack::setTopF(-1);
	Stack::setTopC(-1);
}

Stack::Stack(const Stack& copy) {
	*this = copy;
	return;
}

Stack::~Stack(void) {

}

int Stack::getTopF(void) const {
	return this->_topF;
}

void Stack::setTopF(int newTop) {
	this->_topF = newTop;
}

int Stack::getTopC(void) const {
	return this->_topC;
}

void Stack::setTopC(int newTop) {
	this->_topC = newTop;
}

Fixed Stack::peek(void) const {
	return fstack[Stack::getTopF()];
}

char Stack::peek(char x) const {
	return cstack[Stack::getTopC()];
}

bool Stack::push(char c) {
	if (Stack::getTopC() >= MAX) {
		std::cout << "Stack overflow" << std::endl;
		return false;
	} else {
		Stack::setTopC(Stack::getTopC() + 1);
		cstack[Stack::getTopC()] = c;
		return true;
	}
}

bool Stack::push(Fixed f) {
	if (Stack::getTopF() >= MAX) {
		std::cout << "Stack overflow" << std::endl;
		return false;
	} else {
		Stack::setTopF(Stack::getTopF() + 1);
		fstack[Stack::getTopF()] = f;
		return true;
	}
}

char Stack::pop(char x) {
	if (Stack::getTopC() < 0) {
		std::cout << "Stack Underflow" << std::endl;
		return 0;
	} else {
		char c = cstack[Stack::getTopC()];
		Stack::setTopC(Stack::getTopC() - 1);
		return c;
	}
}

Fixed Stack::pop(void) {
	if (Stack::getTopF() < 0) {
		std::cout << "Stack Underflow" << std::endl;
		return 0;
	} else {
		Fixed f = fstack[Stack::getTopF()];
		Stack::setTopF(Stack::getTopF() - 1);
		return f;
	}
}

bool Stack::isEmpty(char c) {
	return (Stack::getTopC() < 0);
}

bool Stack::isEmpty(void) {
	return (Stack::getTopF() < 0);
}
