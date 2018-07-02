// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 16:24:27 by avolgin           #+#    #+#             //
//   Updated: 2018/06/26 10:59:06 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	Form form1("Forma 086Y", 5, 5);
	std::cout << form1;
	try {
		std::exception();
		Form form2("Forma pogana", 999, 5);
	}
	catch(std::exception & e) {
		std::cout << "Too low grade for init" << std::endl;
	}
	try {
		std::exception();
		Form form2("Forma nedobra", -999, 5);
	}
	catch(std::exception & e) {
		std::cout << "Too high grade for init" << std::endl;
	}
	try {
	Bureaucrat bur3("Pracivnyk low", 6);
	Form form3("Forma dobra ", 5, 5);
	std::cout << form3;
	std::cout << bur3;
	form3.beSigned(bur3);
	}
	catch (std::exception & e) {
		std::cout << "\033[0;31m" << "Too low pracivnyk to sign" \
		<< " \033[0;31m" << std::endl;
	}
	try {
	Bureaucrat bur3("Pracivnyk low", 6);
	Form form3("Forma dobra ", 5, 5);
	std::cout << form3;
	std::cout << bur3;
	bur3.signForm(form3);
	}
	catch (std::exception & e) {
		std::cout << "\033[0;31m" << "Too low pracivnyk to sign" << "\033[0;31m" << std::endl;
	}
	Bureaucrat bur3("Pracivnyk OK ", 5);
	Form formOk("Forma OK ", 5, 5);
	try {
	std::cout << formOk;
	std::cout << bur3;
	bur3.signForm(formOk);
	}
	catch (std::exception & e) {
		std::cout << "Too low pracivnyk to sign" << std::endl;
	}
	std::cout << formOk;
	bur3.signForm(formOk);
	bur3.signForm(formOk);
	return (0);
}
