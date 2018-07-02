// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/27 12:36:53 by avolgin           #+#    #+#             //
//   Updated: 2018/06/27 22:08:49 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <exception>
#include <unistd.h>
#include <stdlib.h>
#include <iomanip>

int		main(int argc, char **argv)
{
	char c;
	int num, i;
	float f;
	double d;

	if (argc !=2)
		return (0);
	i = std::atoi(argv[1]);
	d = std::atof(argv[1]);
	c = static_cast<char>(i);
	f = static_cast<float>(d);
	if (i != 0 || argv[1][0] == '0')
	{
		if (!isprint(c))
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: \'" << c << "\'"<< std::endl;
		std::cout << "int : " << i << std::endl;
	}
	else
	{
		if (strlen(argv[1]) == 1)
			std::cout << "char : '" << argv[1][0] << "\'" << std::endl;
		else
			std::cout << "char: impossible" << std::endl;
//		if (strlen(argv[1]) == 1 && isprint(argv[1][0]))
//			std::cout << "int: " << static_cast<int>(argv[1][0]) << std::endl;
//		else
			std::cout << "int: impossible" << std::endl;
	}
	if (d != 0 || argv[1][0] == '0')
	{
		std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f" << std::endl;
		std::cout << std::fixed << std::setprecision(1) << "double: " << d << std::endl;
	}
	else
	{											  
		std::cout << std::fixed << std::setprecision(1) << "float:  impossible" << std::endl;
		std::cout << std::fixed << std::setprecision(1) << "double:  impossible" <<  std::endl;
	}
	return (0);
}
