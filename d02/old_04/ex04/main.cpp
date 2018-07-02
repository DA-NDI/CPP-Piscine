// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 17:14:09 by avolgin           #+#    #+#             //
//   Updated: 2018/06/21 21:04:22 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.class.hpp"
#include "Stack.class.hpp"
#include <iostream>
#include <cmath>
#include <sstream>

int		isGreater(char a, char b)
{
	if ((a == '+' || a == '-') && (b == '*' || b == '/'))
		return true;
	return false;
}

int main(int argc, char **argv) {

	if (argc == 1 && argc != 2 && argv[0]) {
		std::cout << "Enter args to calculate!" << std::endl;
		return (1);
	}
	int i = 0;
	int is_space = 0;
	std::string arg = argv[1];
	Stack stack;
	std::string word;
    std::stringstream ss(arg);       // Insert the string into a stream
	std::string polish[100];
    while (ss >> word) {
		std::cout << word << std::endl;

	}
 	return 0;
}
