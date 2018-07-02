// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:54:23 by avolgin           #+#    #+#             //
//   Updated: 2018/06/26 16:44:11 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void) {
	return ;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Desctuctor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
	return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void) throw(){
	return;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void) throw(){
	return;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException & obj) throw(){
	*this = obj;
		return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException & obj) throw(){
	*this = obj;
		return ;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw(){
	return;
}


Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw(){
	return;
}

const char * Bureaucrat::GradeTooHighException::what(void) const throw(){
	return ("Not so fast. Too high grade.");
}

const char * Bureaucrat::GradeTooLowException::what(void) const throw(){
	return ("Not so fast. Too low grade.");
}

Bureaucrat::Bureaucrat(const Bureaucrat & obj) {
	*this = obj;
	return ;
}

std::string Bureaucrat::getName(void) const{
	return this->_name;
}

int Bureaucrat::getGrade(void) const{
	return this->_grade;
}

void Bureaucrat::addGrade(int grade) {
	if ((this->_grade - grade) < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= grade;
}

void Bureaucrat::signForm(Form & form)throw(){
	if (form.getStatus() == 1) {
		std::cout << "\033[0;31m" << this->getName() << " cannot sign " << form.getName() \
				  << " because form is already signed" << "\033[1;31m" << std::endl;
		return ;
	}
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signs form " << form.getName() \
				  << "\033[1;32m\u2705\033[1;31m" << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << "\033[0;31m" <<this->getName() << " cannot sign " << form.getName() \
	  << " because grade is too low" << "\033[1;31m" << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form) const{
	try {
	form.execute(*this);
	std::cout << "\033[0;32m" << this->getName() <<  " executes " << form.getName() \
			  << "\u2714\033[1;31m" << std::endl;
	}
	catch (std::exception & e) {
		std::cout << "\033[0;31m" <<this->getName() << " cannot execute " \
		<< form.getName()										\
	  << " because grade of bureaucrat is too low" << "\033[1;31m" << std::endl;
	}
}

void Bureaucrat::subGrade(int grade) {
	if ((this->_grade + grade) > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade += grade;
}

Bureaucrat&		Bureaucrat::operator=(Bureaucrat const &) {
	return *this;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & obj) {
	o << "\033[0;32m" << obj.getName() << ", bureaucrat grade: " << obj.getGrade()\
	  << "\033[0;0m" << std::endl;
	return o;
} ;
