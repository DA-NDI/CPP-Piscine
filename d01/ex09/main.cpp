// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 13:10:45 by avolgin           #+#    #+#             //
//   Updated: 2018/06/20 14:36:18 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Logger.hpp"

int		main()
{
	Logger logger1("1.txt");
	logger1.log("logToConsole", "HellO");
	logger1.log("logToFile", "HellO");
	Logger logger2("2.txt");
	logger2.log("logToFile", "HellO");
	return (0);
}
