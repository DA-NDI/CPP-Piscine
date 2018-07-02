// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   test.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/27 09:55:44 by avolgin           #+#    #+#             //
//   Updated: 2018/06/27 10:29:21 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

// /WO/ conversion flag
// 
#include <stdio.h>
#include <iostream>

int		main(void)
{
//example of reinterpreting address;

	int f = 5.401f; //address is float address
	void *v = &f;
	int *d = v; //and if we will try to reinterpret as int, it will show different!
	//number. But you may want ot nned it. To make a void* in a struct and then
	//interpret to what you want;
	printf ("%d", *d);
	return (0);

	
}
