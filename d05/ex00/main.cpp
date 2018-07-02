// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 16:24:27 by avolgin           #+#    #+#             //
//   Updated: 2018/06/25 18:49:12 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"

int		main(void) {
	try {
	Bureaucrat *burocrat = new Bureaucrat("Redyska1", 1);
	std::cout << *burocrat;
	burocrat->addGrade(5);
	if (burocrat->getGrade() < 1) {
		std::exception();
	}
	}
	catch(std::exception & e) {
		std::cout << "Catched high add exception" << std::endl;
	}
	try {
	Bureaucrat *burocrat = new Bureaucrat("Redyska2", 5);
	std::cout << *burocrat;
	burocrat->subGrade(150);
	if (burocrat->getGrade() > 150) {
		std::exception();
	}
	}
	catch(std::exception & e) {
		std::cout << "Catched low sub exception" << std::endl;
	}
	try {
	Bureaucrat *burocrat = new Bureaucrat("Redyska3", -5);
	if (burocrat->getGrade() < 1) {
		std::exception();
	}
	}
	catch(std::exception & e) {
		std::cout << "Catched high exception" << std::endl;
	}
	try {
	Bureaucrat *burocrat = new Bureaucrat("Redyska4", 160);
	if (burocrat->getGrade() > 150) {
		std::exception();
	}
	}
	catch(std::exception & e) {
		std::cout << "Catched low exception" << std::endl;
	}
	return (0);
}
