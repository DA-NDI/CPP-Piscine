// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/28 18:20:18 by avolgin           #+#    #+#             //
//   Updated: 2018/06/28 22:09:28 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Array.hpp"
#include <iostream>

int		main(void)
{
	Array <int>test1(5);
	Array <int>test2(5);
	for (int i = 0; i < 5; i++)
	{
		test1[i] = 123 + i;
		test2[i] = 456 + i;
	}
	std::cout << "test1 elements:" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << test1[i] << std::endl;
	std::cout << "test2 elements:" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << test2[i] << std::endl;
	test1 = test2;	
	std::cout << "test1 elements after test1 = test2:" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << test1[i] << std::endl;
	try {
		std:: cout << test2[99];
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	Array <std::string>str1(2);
	Array <std::string>str2(2);
	str1[0] = "First string str1";
	str1[1] = "Second string str1";
	str2[0] = "First of str2";
	str2[1] = "Second of str2";
	try {
		std::cout << "minus 2 element of string array:" << std::endl;
		std::cout << str2[-1] << std::endl;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "str1 elements:" << std::endl;
	for (int i = 0; i < 2; i++)
		std::cout << str1[i] << std::endl;
	std::cout << "str2 elements:" << std::endl;
	for (int i = 0; i < 2; i++)
		std::cout << str2[i] << std::endl;
	str1 = str2;	
	std::cout << "str1 elements after str1 = str2:" << std::endl;
	for (int i = 0; i < 2; i++)
		std::cout << str1[i] << std::endl;
	try {
		std:: cout << str1[99];
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	Array <std::string>arr1;
	Array <std::string>arr2;
	std::cout << "empty arr1 and arr2 created" << std::endl;
	std::cout << "address of empty arr1 = " << &arr1 << std::endl;
	std::cout << "address of empty arr2 = " << &arr2 << std::endl;
	try {
		std::cout << arr1[5];
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	arr1 = arr2;
	std::cout << "address of empty arr1 = " << &arr1 << std::endl;
	int * a = new int();
	std::cout << "empty *a: " << *a << std::endl;
	Array<int>a1(5);
	a1[2] = 5;
	Array <int> a3(a1);
	std::cout << "a3[2] after copy from a1[2]. Must be 5: " << a3[2] << std::endl;
	return (0);

}
