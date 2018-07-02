// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Intern.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:54:23 by avolgin           #+#    #+#             //
//   Updated: 2018/06/26 23:29:54 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Intern.hpp"
#define CALL_ACTION(object,ptrToMember) ((object)->*(ptrToMember))

Intern::Intern(void) {
	return ;
}

Intern::Intern(const Intern & obj) {
	*this = obj;
	return ;
}

Intern::~Intern(void) {
	std::cout << "Intern destructor called" << std::endl;
	return ;
}

Intern&		Intern::operator=(const Intern &) {
	return *this;
}

Form* Intern::robo(const std::string & target){
	return new RobotomyRequestForm(target);
}

Form* Intern::shrub(const std::string & target){
	return new ShrubberyCreationForm(target);
}

Form* Intern::pres(const std::string & target){
	return new PresidentialPardonForm(target);
}


Form* Intern::makeForm(std::string const & formName, const std::string & target)throw(const char*) {
const std::string req[17] = {"RobotomyRequestForm", \
					 "ShrubberyCreationForm", \
					 "PresidentialPardonForm", \
                     "robotomy", "shrubby", "President", \
                     "robotomy request", "shrubber form", "president form"\
                     "robrequest", "Shrub", "Pres", \
                     "ShiningAssRequest", "form shrubber", "presik form", \
                     "RobotomyRequestForm", "ShrubForm", "FormPardon"};
	typedef Form* (Intern::*FuncPtr)(const std::string & target);
    FuncPtr functions[3] = {&Intern::robo, &Intern::shrub, &Intern::pres};
	for (int i = 0; i <= 17; i++) {
    if (req[i] == formName)
    {
        return CALL_ACTION(this,functions[i % 3])(target);
    }
	}
	std::string error = "No such form!";
	throw (&error[0]);
}

std::ostream & operator<<(std::ostream & o, Intern const &) {
	o << "\033[0;32mIntern\033[0;0m";
	return o;
}
