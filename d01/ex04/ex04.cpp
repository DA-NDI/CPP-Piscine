// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex04.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 16:50:00 by avolgin           #+#    #+#             //
//   Updated: 2018/06/19 16:55:19 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int		main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *pointer = &str;
	std::string &reference = str;

	std::cout << "Dereferenced Pointer to string:" << *pointer << std::endl;
	std::cout << "Display using reference to string:" << reference  << std::endl;
}
