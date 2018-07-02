// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Stack.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/21 22:02:12 by avolgin           #+#    #+#             //
//   Updated: 2018/06/21 22:03:59 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef STACK_CLASS_HPP
# define STACK_CLASS_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <fstream>
#include <sstream>
#include "Fixed.class.hpp"

#define MAX 1000

class Stack {
	public:
		Fixed fstack[MAX];
		char cstack[MAX];

		Stack(void);
		Stack(const Stack& copy);
		~Stack(void);

		bool push(Fixed f);
		bool push(char c);
		Fixed pop(void);
		char pop(char c);
		bool isEmpty(void);
		bool isEmpty(char c);
		Fixed peek(void) const;
		char peek(char x) const;

		int getTopF(void) const;
		int getTopC(void) const;
		void setTopF(int newTop);
		void setTopC(int newTop);
	
	private:
		int _topC;
		int _topF;
};

#endif
