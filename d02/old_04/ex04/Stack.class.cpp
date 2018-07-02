// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Stack.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/21 16:21:28 by avolgin           #+#    #+#             //
//   Updated: 2018/06/21 18:38:25 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

/* C++ program to implement basic stack
   operations */
#include "Stack.class.hpp"

Stack::Stack(void){
		top_fixed = -1;
		top_char = -1;
		return ;
}
Stack::~Stack(void) {
	return ;
}

bool Stack::push(char operators){
    if (top_char >= MAX)
    {
		std::cout << "Stack Overflow";
        return false;
    }
    else
    {
        a[++top_char] = operators;
        return true;
    }
}

Stack::Stack(const Stack & stack) {
	*this = stack;
	return ;
}

Stack&		Stack::operator=(Stack const & rhs) {
	return *this;
}

bool Stack::push(Fixed operand){
    if (top_fixed >= MAX)
    {
		std::cout << "Stack Overflow";
        return false;
    }
    else
    {
        b[++top_fixed] = operand;
        return true;
    }
}

char Stack::pop(char c) {
    if (top_char < 0)
    {
		std::cout << "Stack Underflow";
        return 0;
    }
    else
    {
		char x = a[top_char--];
        return x;
    }
}

Fixed Stack::pop(Fixed & a) {
    if (top_fixed < 0)
    {
		std::cout << "Stack Underflow";
        return 0;
    }
    else
    {
		Fixed x = b[top_fixed--];
        return x;
    }
}

char Stack::peek(char c) {
	return a[this->top_char];
}

Fixed Stack::peek(Fixed & a) {
	return b[this->top_fixed];
}



bool Stack::isEmpty(char c) {
    return (top_char < 0);
}

bool Stack::isEmpty(Fixed & c) {
    return (top_fixed < 0);
}
