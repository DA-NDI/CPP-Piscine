// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 14:49:23 by avolgin           #+#    #+#             //
//   Updated: 2018/06/20 15:51:35 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <fstream>

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		while (1)
		{
			std::string buff;
			getline(std::cin, buff);
			if (buff.empty())
				return (1);
			std::cout << buff << std::endl;
		}
	}
	for (int i = 1; i < argc; i++)
	{
	std::ifstream ifs(argv[i]);
	std::string content((std::istreambuf_iterator<char>(ifs)),
                 std::istreambuf_iterator<char>());
	if (content.empty())
	{
		std::cout << "./cato9tails: " << argv[1] << ": No such file or \
directory" << std::endl;
		return(1);
	}
	std::cout << content;
	}
	return (0);
}
