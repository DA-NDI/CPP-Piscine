// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Stack.Class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/21 16:22:08 by avolgin           #+#    #+#             //
//   Updated: 2018/06/21 18:39:38 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef STACK_CLASS_HPP
# define STACK_CLASS_HPP
# define MAX 1000

#include <iostream>
#include "Fixed.class.hpp"

class Stack
{
public:
    int top_fixed;
	int	top_char;
	char a[MAX];    //Maximum size of Stack
	Fixed b[MAX];
	
    Stack(void);
	~Stack(void);
	Stack(const Stack & stack);
	Stack &operator=(Stack const & rhs);
    bool push(char x);
    bool push(Fixed x);
	char pop(char c);
	Fixed pop(Fixed & c);
    bool isEmpty(char a);
    bool isEmpty(Fixed & a);
	char peek(char c);
	Fixed peek(Fixed & a);
};

#endif

