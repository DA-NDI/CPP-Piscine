// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 16:24:27 by avolgin           #+#    #+#             //
//   Updated: 2018/06/26 17:47:47 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void) {
	std::cout << "Shrub Exception  Test>>>>>>>>>>>>>>>>>" << std::endl;
	ShrubberyCreationForm veryLongName("Useless");
	std::cout << veryLongName;
	veryLongName.Action("Useless day");
	try {
	ShrubberyCreationForm veryLongName("Useless1");
	ShrubberyCreationForm f1("f1");
	Bureaucrat bu1("Enemy", 5);
	bu1.signForm(veryLongName);
	bu1.signForm(veryLongName);
	Bureaucrat bu2("Enemy", 150);
	bu2.signForm(veryLongName);
	bu2.signForm(f1);
	}
	catch (std::exception & e) {
		std::cout << "Exception too high shrubbery" << std::endl;
	}
	std::cout << "Shrub Execute Test>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	ShrubberyCreationForm f2("Form 2");
	Bureaucrat bur2("Enemy", 5);
	bur2.signForm(f2);
	std::cout << f2;
	f2.execute(bur2);
	std::cout << "Check file " << f2.getTarget() << "_shrubbery created! \u2618" << std::endl;
	try {
	ShrubberyCreationForm f3("Form 3");
	Bureaucrat bur3("Enemy", 150);
	bur3.signForm(f2);
	std::cout << f2;
	bur3.signForm(f3);
	std::cout << f3;
	f3.execute(bur3);
	}
	catch (std::exception & e) {
		std::cout << "Execute exception. Too low to sign" << std::endl;
	}
	try {
	ShrubberyCreationForm f3("Form 3");
	Bureaucrat bur3("Bur3", 150);
	Bureaucrat bur4("Bur4", 5);
	std::cout << f2;
	bur3.executeForm(f3);
	std::cout << f3;
	f3.execute(bur3);
	bur4.signForm(f3);
	f3.execute(bur4);
	std::cout << "Check file " << f3.getTarget() << "_shrubbery created! \u2618" << std::endl;
	f3.execute(bur3);

	}
	catch (std::exception & e) {
		std::cout << "Execute exception. Bureaucrat is too low to sign" << std::endl;
	}
	bur2.executeForm(f2);
	std::cout << "Robotomized Exception  Test>>>>>>>>>>>>>>>>>" << std::endl;
	RobotomyRequestForm veryLong("Useless");
	std::cout << veryLong;
	veryLong.Action("Useless day");
	try {
	RobotomyRequestForm veryLongName("Useless1");
	RobotomyRequestForm f1("f1");
	Bureaucrat bu1("Enemy", 5);
	bu1.signForm(veryLongName);
	bu1.signForm(veryLongName);
	Bureaucrat bu2("Enemy", 150);
	bu2.signForm(veryLongName);
	bu2.signForm(f1);
	}
	catch (std::exception & e) {
		std::cout << "Exception too high shrubbery" << std::endl;
	}
	std::cout << "Robotomy Execute Test>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	RobotomyRequestForm f9("Robo Form 9");
	Bureaucrat bur9("Enemy", 5);
	bur9.signForm(f9);
	std::cout << f9;
	f9.execute(bur9);
	try {
	RobotomyRequestForm f3("Robo Form 3");
	Bureaucrat bur3("Enemy", 150);
	bur3.signForm(f2);
	std::cout << f2;
	bur3.signForm(f3);
	std::cout << f3;
	f3.execute(bur3);
	}
	catch (std::exception & e) {
		std::cout << "Execute exception. Too low to sign" << std::endl;
	}
	try {
	RobotomyRequestForm f3("Form 3");
	Bureaucrat bur3("Bur3", 150);
	Bureaucrat bur4("Bur4", 5);
	std::cout << f2;
	bur3.executeForm(f3);
	std::cout << f3;
	f3.execute(bur3);
	bur4.signForm(f3);
	f3.execute(bur4);
	f3.execute(bur4);
	f3.execute(bur4);
	f3.execute(bur4);
	f3.execute(bur4);
	f3.execute(bur4);
	f3.execute(bur4);
	f3.execute(bur3);
	}
	catch (std::exception & e) {
		std::cout << "Execute exception. Bureaucrat is too low to sign" << std::endl;
	}
	bur9.executeForm(f9);
	std::cout << "Pres Exception  Test>>>>>>>>>>>>>>>>>" << std::endl;
	PresidentialPardonForm very("Useless");
	std::cout << veryLong;
	very.Action("Useless day");
	try {
	PresidentialPardonForm very("Useless1");
	PresidentialPardonForm f1("f1");
	Bureaucrat bu1("Enemy", 5);
	bu1.signForm(very);
	bu1.signForm(very);
	Bureaucrat bu2("Enemy", 150);
	bu2.signForm(very);
	bu2.signForm(f1);
	}
	catch (std::exception & e) {
		std::cout << "Exception too high shrubbery" << std::endl;
	}
	std::cout << "President Execute Test>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	PresidentialPardonForm f99("Pres Form 9");
	Bureaucrat bur99("Burocrat", 5);
	bur99.signForm(f99);
	std::cout << f99;
	f99.execute(bur99);
	try {
	PresidentialPardonForm f3("Pres Form 3");
	Bureaucrat bur3("Enemy", 150);
	bur3.signForm(f2);
	std::cout << f2;
	bur3.signForm(f3);
	std::cout << f3;
	f3.execute(bur3);
	}
	catch (std::exception & e) {
		std::cout << "Execute exception. Too low to sign" << std::endl;
	}
	try {
	PresidentialPardonForm f3("Pres Form 3");
	Bureaucrat bur3("Bur3", 150);
	Bureaucrat bur4("Bur4", 5);
	std::cout << f2;
	bur3.executeForm(f3);
	std::cout << f3;
	f3.execute(bur3);
	bur4.signForm(f3);
	f3.execute(bur4);
	f3.execute(bur4);
	f3.execute(bur4);
	f3.execute(bur4);
	f3.execute(bur4);
	f3.execute(bur4);
	f3.execute(bur4);
	f3.execute(bur3);
	}
	catch (std::exception & e) {
		std::cout << "Execute exception. Bureaucrat is too low to sign" << std::endl;
	}
	return (0);
}
