// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Stack.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/21 22:04:14 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 17:22:19 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <MainGame.hpp>

Stack::Stack(void) {
	Stack::setTopF(-1);
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

GameEntity Stack::peek(void) const {
	return fstack[Stack::getTopF()];
}

bool Stack::push(GameEntity f) {
	if (Stack::getTopF() >= MAX) {
		std::cout << "Stack overflow" << std::endl;
		return false;
	} else {
		Stack::setTopF(Stack::getTopF() + 1);
		fstack[Stack::getTopF()] = f;
		return true;
	}
}

GameEntity Stack::pop(void) {
	if (Stack::getTopF() < 0) {
		std::cout << "Stack Underflow" << std::endl;
		return 0;
	} else {
		GameEntity f = fstack[Stack::getTopF()];
		Stack::setTopF(Stack::getTopF() - 1);
		return f;
	}
}

bool Stack::isEmpty(void) {
	return (Stack::getTopF() < 0);
}
