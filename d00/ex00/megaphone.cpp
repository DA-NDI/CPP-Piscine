// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   megaphone.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/18 09:53:32 by avolgin           #+#    #+#             //
//   Updated: 2018/06/18 10:23:14 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <cctype>

int		main(int argc, char **argv)
{
	std::string	printMe;
	int			i = 1;
	int			j;
	
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	while (i < argc)
	{
		j = -1;
		while (argv[i][++j])
		{
			std::cout << (char)toupper(argv[i][j]);
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
