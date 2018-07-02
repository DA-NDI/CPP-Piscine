// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 10:31:31 by avolgin           #+#    #+#             //
//   Updated: 2018/06/20 12:32:05 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <fstream>
#include <string>
#include "FindAndReplace.class.hpp"

int		main(int argc, char **argv)
{
	if (argc != 4 || !argv[2][0] || !argv[3][0])
	{
		std::cout << "Enter valid args!" << std::endl;
		return (0);
	}
	std::ifstream ifs(argv[1]);
	std::string filename = (std::string)argv[1] + ".replace";
	std::ofstream ofs(filename);
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	std::string content((std::istreambuf_iterator<char>(ifs)),
                 std::istreambuf_iterator<char>());
	if (content.empty())
	{
		std::cout << "File is empty, invalid or inaccessible" << std::endl;
		return(1);
	}
	FindAndReplace insta;
	insta.doit(content, s1, s2);
	ofs << content;
	ofs.close();
	ifs.close();
}
