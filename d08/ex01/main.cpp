// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/29 14:47:15 by avolgin           #+#    #+#             //
//   Updated: 2018/06/29 19:02:25 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "span.hpp"

int		main(void) {
	std::cout << "---simple adding---------------------->" << std::endl;
	try {
	span s1(2);
	s1.addNumber(5);
	s1.addNumber(5);
	}
	catch (const char * e) {
		std::cout << e << std::endl;
	}
	std::cout << "---simple adding + range exception----->" << std::endl;
	try {
	span s1(2);
	s1.addNumber(5);
	s1.addNumber(5);
	s1.addNumber(5);
	}
	catch (const char * e) {
		std::cout << e << std::endl;
	}
	std::cout << "---min max after range----------------->" << std::endl;
	try {
	span s1(110);
	s1.addNumber(0, 50, 1);
	s1.addNumber(50, 70, 42);
	s1.addNumber(70, 110, 43);
	std::cout << "longest: " << s1.longestSpan() << std::endl;
	std::cout << "shortest: " << s1.shortestSpan() << std::endl;
	for (int i = 0; i < 110; i++)
		std::cout << " " << s1[i] << " ";
	std::cout << std::endl;
	}
	catch (const char * e) {
		std::cout << e << std::endl;
	}
	std::cout << "---adding 10 mln of numbers----------->" << std::endl;
	try {
	span s1(10000001);
	for (int i = 0; i < 10000001; i++)
	s1.addNumber(i + 5);
	std::cout << "end of 10 mln elem. to array adding" << std::endl;
	}
	catch (const char * e) {
		std::cout << e << std::endl;
	}
	std::cout << "---adding range 0,2 to inited vector-->" << std::endl;
	try {
	span s1(100);
	for (int j = 0; j < 100; j++)
		s1.addNumber(1);
	s1.addNumber(0, 2, 42);
	std::cout << "s1[0] == " << s1[0] << std::endl;
    std::cout << "s1[1] == " << s1[1] << std::endl;
    std::cout << "s1[2] == " << s1[2] << std::endl;
	}
	catch (const char * e) {
		std::cout << e << std::endl;
	}
	std::cout << "---adding range 0,0 to inited vector-->" << std::endl;
	try {
	span s1(100);
	for (int j = 0; j < 100; j++)
		s1.addNumber(1);
	s1.addNumber(0, 0, 42);
	std::cout << "s1[0] == " << s1[0] << std::endl;
	}
	catch (const char * e) {
		std::cout << e << std::endl;
	}
	std::cout << "---adding range 0,1 to inited vector-->" << std::endl;
	try {
	span s1(100);
	for (int j = 0; j < 100; j++)
		s1.addNumber(1);
	s1.addNumber(0, 1, 42);
	std::cout << "s1[0] == " << s1[0] << std::endl;
	}
	catch (const char * e) {
		std::cout << e << std::endl;
	}
	std::cout << "---adding range 0,2 to empty array---->" << std::endl;
	try {
	span s1(100);
	s1.addNumber(0, 2, 5);
	std::cout << "s1[0] == " << s1[0] << std::endl;
    std::cout << "s1[1] == " << s1[1] << std::endl;
    std::cout << "s1[2] == " << s1[2] << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---adding range 0,2 + one element---->" << std::endl;
	try {
	span s1(100);
	s1.addNumber(0, 2, 9);
	s1.addNumber(99);
	std::cout << "s1[0] == " << s1[0] << std::endl;
    std::cout << "s1[1] == " << s1[1] << std::endl;
    std::cout << "s1[2] == " << s1[2] << std::endl;
	}
	catch (char const * e) {
		std::cout << e << std::endl;
	}
	std::cout << "---longest, shortest----------------->" << std::endl;
	try {
	span s1(5);
	s1.addNumber(42);
	s1.addNumber(100);
	s1.addNumber(96);
	std::cout << "longest: " << s1.longestSpan() << std::endl;
	std::cout << "shortest: " << s1.shortestSpan() << std::endl;
	}
	catch (const char * e) {
		std::cout << e << std::endl;
	}
	std::cout << "---longest exception----------------->" << std::endl;
	try {
	span s1(2);
	s1.addNumber(42);
	std::cout << "longest: " << s1.longestSpan() << std::endl;
	}
	catch (const char * e) {
		std::cout << e << std::endl;
	}
	std::cout << "---shortest exception----------------->" << std::endl;
	try {
	span s1(2);
	s1.addNumber(42);
	std::cout << "shortest: " << s1.shortestSpan() << std::endl;
	}
	catch (const char * e) {
		std::cout << e << std::endl;
	}
	return(0);
}
