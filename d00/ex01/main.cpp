// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/18 16:18:49 by avolgin           #+#    #+#             //
//   Updated: 2018/06/18 17:47:22 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Contact.class.hpp"

int		main(int argc, char **argv)
{
	Contact contacts[8];
	int		i = 0;
	std::string arg;
	int		tmp = 0;

	if (argc != 1 || !argv[0])
	{
		std::cout << "Usage: ./awesome_phonebook" << std::endl;
		return (1);
	}
	while (1)
	{
		std::cout << "Enter ADD SEARCH or EXIT command" << std::endl;
		std::cin >> arg;
		if (std::cin.fail())
			break;
		if (arg.compare("ADD") == 0 && i < 8)
		{
			contacts[i].add(i);
			i++;
		}
		else if(arg.compare("SEARCH") == 0)
		{
			tmp = -1;
			while (++tmp < i)
				contacts[tmp].print();
			std::cout << "Enter index to search" << std::endl;
			std::cin >> tmp;
			if (std::cin.fail())
				break;
			else if (tmp >= 0 && tmp < 8)
				contacts[tmp].print();
		}
		else if (arg.compare("EXIT") == 0)
			break;
	}
	return (0);
}
