// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/21 22:02:29 by avolgin           #+#    #+#             //
//   Updated: 2018/06/21 22:08:11 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Stack.class.hpp"
#include "Fixed.class.hpp"

bool isGreater(char a, char b) {
	if ((a == '+' || a == '-') && (b == '*' || b == '/')) {
		return true;
	}
	return false;
}

bool isEqual(char a, char b) {
	if ((a == '+' || a == '-') && (b == '+' || b == '-')) {
		return true;
	} else if ((a == '*' || a == '/') && (b == '*' || b == '/')) {
		return true;
	}
	return false;
}

bool isOperator(char c) {
	if (c == '+' || c == '-' || c == '*' || c == '/') {
		return true;
	}
	return false;
}

bool isNumber(char c) {
	if (!isOperator(c) && c != '(' && c != ')') {
		return true;
	}
	return false;
}


bool isLeftBracket(char c) {
	if (c == '(') {
		return true;
	}
	return false;
}

bool isRightBracket(char c) {
	if (c == ')') {
		return true;
	}
	return false;
}

int		main(int argc, char **av) {

	Stack calc;

	if (argc != 2)
	{
		std::cout << "Enter valid args!" << std::endl;
		return (0);
	}
	std::string str = av[1];
	std::istringstream stm(str) ;
	std::string word;

	std::string polish[100];
	int i = 0;
	char x = 'x';

	while(stm >> word) {
		if (isNumber(word[0]))
		{
			polish[i] = word;
			i++;
		}
		if (isOperator(word[0]))
		{
			while ((isGreater(word[0], calc.peek(x)) || isEqual(word[0], calc.peek(x))) && calc.peek(x) != '(')
			{
				polish[i] = calc.pop(x);
				i++;
			}
			calc.push((char)word[0]);
		}
		if (isLeftBracket(word[0]))
		{
			calc.push((char)word[0]);
		}
		if (isRightBracket(word[0]))
		{
			while (calc.peek(x) != '(')
			{
				polish[i] = calc.pop(x);
				i++;
			}
			calc.pop(x);
		}
	}
	while (calc.getTopC() >= 0)
	{
		polish[i] = calc.pop(x);
		i++;
	}

	int j = 0;

	while (j < i) {
		if (isOperator(polish[j][0])) {
			Fixed r2(calc.pop());
			Fixed r1(calc.pop());
			if (polish[j][0] == '+') {
				calc.push(r1 + r2);
			} else if (polish[j][0] == '-') {
				calc.push(r1 - r2);
			} else if (polish[j][0] == '/') {
				if (r2 == 0)
				{
					std::cout << "No division by zero" << std::endl;
					return (1);
				}
					
				calc.push(r1 / r2);
			} else if (polish[j][0] == '*') {
				calc.push(r1 * r2);
			}
		} else {
			if (polish[j].find(".") != -1) {
				Fixed a((float)atof(&(polish[j][0])));
				calc.push(a);
			} else {
				Fixed a(atoi(&(polish[j][0])));
				calc.push(a);
			}
		}
		j++;
	}
	std::cout << calc.peek() << std::endl;

	return 0;
}
