// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   iter.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/28 13:45:11 by avolgin           #+#    #+#             //
//   Updated: 2018/06/28 21:45:01 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

template<typename T, typename A>
void iter(T * array, A  length, void (*f)(const T & elem)) {
	for (int i = 0; i < length; i++)
	{
		(*f)(array[i]);
	}
	return ;
}

template<typename T>
void function(const T & elem) {
	std::cout << "iter function: "<< elem << std::endl;
}

int		main(void)
{
	std::string str[20] = {"Hello", "Pello", "Yo"};
	for (int i = 0; i < 3; i++)
		std::cout << "str array before iter " << str[i] << std::endl;
	iter(str, 3, function);
	return (0);
}
