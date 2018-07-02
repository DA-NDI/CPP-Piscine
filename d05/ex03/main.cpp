// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 16:24:27 by avolgin           #+#    #+#             //
//   Updated: 2018/06/26 23:33:27 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main(void) {
	try{
	Intern someRandomIntern3;
	Form* rrf3 = NULL;
	rrf3 = someRandomIntern3.makeForm("No", "Bender");
	}
	catch(char const *)
	{
		std::cout << "No such form" << std::endl;
	}
	try {
	Intern someRandomIntern;
	Form* rrf = NULL;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrf;
	Intern someRandomIntern1;
	Form* rrf1 = NULL;
	rrf1 = someRandomIntern1.makeForm("shrubber form", "Bender");
	delete rrf1;
	std::cout << *rrf1;
	Intern someRandomIntern2;
	Form* rrf2 = NULL;
	rrf2 = someRandomIntern2.makeForm("president form", "Bender");
	std::cout << *rrf2;
	delete rrf2;
	}
	catch(char const*)
	{
		std::cout << "No such form exception" << std::endl;
	}
	Intern someRandomIntern4;
	// Form* rrf4 = NULL;
	Form rrf4 = someRandomIntern4.makeForm("RobotomyRequestForm121312", "Bender");
	std::cout << rrf4;
	delete rrf4;
	Intern someRandomIntern5;
	Form* rrf5 = NULL;
	rrf5 = someRandomIntern5.makeForm("ShrubberyCreationForm", "Bender");
	std::cout << *rrf5;
	delete rrf5;
	Intern someRandomIntern6;
	Form* rrf6 = NULL;
	rrf6 = someRandomIntern6.makeForm("ShiningAssRequest", "Bender");
	std::cout << *rrf6;
	delete rrf6;
	Intern someRandomIntern7;
	Form* rrf7 = NULL;
	rrf7 = someRandomIntern7.makeForm("Pres", "Bender");
	std::cout << *rrf7;
	delete rrf7;
	return (0);
}
