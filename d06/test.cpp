// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   test.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/27 09:55:44 by avolgin           #+#    #+#             //
//   Updated: 2018/06/27 12:35:13 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

// /WO/ conversion flag
// 
#include <stdio.h>
#include <iostream>

int		main(void)
{
//example of reinterpreting address;

	float f = 19996765.401f; //address is float address
	void *v = &f;
//	int *d = v;
	int *d = (int *)v; //and if we will try to reinterpret as int, it will show different!
	//number. But you may want ot nned it. To make a void* in a struct and then
	//interpret to what you want;
	printf ("%d\n", *d);
	int const b = 5;
//	int *c = &b;  Wrong
	int *c = (int*)b;
//	printf ("%d\n", *c); Segfault!
	//reinterpretation - porkjadok bitiv ne minjaetsa
	//upcast  - to parent address/
	//downcast - to chald address
	/*STATIC_CAST*/
	int a = 42;
	double i = a;
	int k = static_cast<int>(i);
	std::cout << k << std::endl;

	class Parent {};
	class Child1: public Parent {};

	class Unrelated {};

	Child1 c1;
	Child1 * c2 = &c1;
	Parent * p = c2;
	Child1 *c3 = static_cast<Child1*>(p);
	return (0);

	
}
