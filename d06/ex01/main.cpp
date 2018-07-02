// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/27 16:55:08 by avolgin           #+#    #+#             //
//   Updated: 2018/06/27 21:15:41 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "main.hpp"

void* serialize(void) {
	int rand;
    char alphab[] = {'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', \
                               'e', 'F', 'f', 'G', 'g', 'H', 'h', 'I', 'i', \
                               'J', 'j', 'K', 'k', 'L', 'l', 'M', 'm', 'N', \
                               'n', 'O', 'o', 'P', 'p', 'Q', 'q', 'R', 'r', \
                               'S', 's', 'T', 't', 'U', 'u', 'V', 'v', 'W', \
                               'w', 'X', 'x', 'Y', 'y', 'Z', 'z', '0', '1', \
                               '2', '3', '4', '5', '6', '7', '8', '9'};
	int num = std::rand();
	char *str = new char[20];
	int i;
	for(i = 0; i < 8; i++)
		str[i] = alphab[std::rand() % 61];
	char* numReint = reinterpret_cast<char*>(&num);
	for(int k = 0; i < 12; i++, k++)
		str[i] = numReint[k];
	for(; i < 20; i++)
		str[i] = alphab[std::rand() % 61];
	str[i] = '\0';
	return reinterpret_cast<void*>(str);
}
Data* deserialize( void * raw )
{
	char *raww = reinterpret_cast<char*>(raw);
	Data * ret = new Data;
	for (int i = 0; i < 8; i++)
		ret->s1 += raww[i];
	for (int i = 12; i < 20; i++)
		ret->s2 += raww[i];
	ret->n = *(reinterpret_cast<int*>(raww + 8));
	return ret;
}
		
int		main(void)
{
	std::srand(std::time(0));
	void *raw = serialize();
	std::cout << "Serialized data:: " << reinterpret_cast<char*>(raw) << std::endl;
	Data *dat = deserialize(raw);
	std::cout << "String 1: " << dat->s1<< std::endl;
	std::cout << "String 2: " << dat->s2 << std::endl;
	std::cout << "int n: " << dat->n << std::endl;

	void *raw1 = serialize();
	std::cout << "Serialized data:: " << reinterpret_cast<char*>(raw1) << std::endl;
	Data *dat1 = deserialize(raw1);
	std::cout << "String 1: " << dat1->s1<< std::endl;
	std::cout << "String 2: " << dat1->s2 << std::endl;
	std::cout << "int n: " << dat1->n << std::endl;
	
	return (0);
}
