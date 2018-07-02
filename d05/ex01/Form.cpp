// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:54:23 by avolgin           #+#    #+#             //
//   Updated: 2018/06/26 10:51:45 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) :
	_name("Default"),
	_formGrade(0),
	_isSigned(0),
	_execGrade(0){
	return ;
}

Form::~Form(void) {
	return ;
}

Form::Form(std::string const & name, const int formGrade, const int execGrade) :
	_name(name),
	_formGrade(formGrade),
	_isSigned(0),
	_execGrade(execGrade){
	if (this->getFormGrade() < 1)
		throw Form::GradeTooHighException();
	else if (this->getFormGrade() > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::GradeTooHighException::GradeTooHighException(void) throw(){
	return;
}

Form::GradeTooLowException::GradeTooLowException(void) throw(){
	return;
}

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException & obj) throw(){
	*this = obj;
		return ;
}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException & obj) throw(){
	*this = obj;
		return ;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw(){
	return;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw(){
	return;
}

const char * Form::GradeTooHighException::what(void) const throw(){
	return ("Not so fast. Too high grade to sign.");
}

const char * Form::GradeTooLowException::what(void) const throw(){
	return ("Not so fast. Too low grade to sign.");
}

Form::Form(const Form & obj) :
	_name(obj.getName()),
	_formGrade(obj.getFormGrade()),
	_isSigned(obj.getStatus()),
	_execGrade(obj.getExecGrade()) {
	*this = obj;
	return ;
}

std::string Form::getName(void) const{
	return this->_name;
}

void Form::sign(void){
	this->_isSigned = 1;
}

int Form::getFormGrade(void) const{
	return this->_formGrade;
}

int Form::getExecGrade(void) const{
	return this->_execGrade;
}

bool	Form::getStatus(void) const {
	if (this->_isSigned == 0)
		return (0);
	return (1);
}

void Form::beSigned(Bureaucrat & bur) throw(Form::GradeTooLowException){
	if (bur.getGrade() > this->getFormGrade())
		throw Form::GradeTooLowException();
	else
		this->sign();
}

std::string Form::isSigned(void) const{
	if (this->getStatus())
		return "signed!";
	else
		return "not signed!";
}

Form&		Form::operator=(Form const &) {
	return *this;
}

std::ostream & operator<<(std::ostream & o, Form const & obj) {
	o << "\033[0;32m" << obj.getName() << "form of grade "<< obj.getFormGrade() << " signed status: " << obj.isSigned() << "\033[0;0m" << std::endl;
	return o;
} ;
