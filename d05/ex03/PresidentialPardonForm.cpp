// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//    PresidentialPardonForm.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvino42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:54:23 by avolgin           #+#    #+#             //
//   Updated: 2018/06/26 17:42:23 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
	Form("Pres", 25, 5){
	this->setTarget("Default");
	return ;
}

 PresidentialPardonForm::~PresidentialPardonForm(void) {
	return ;
}

 PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	 Form("Pres", 25, 5){
	 std::srand(std::time(0));
	 this->setTarget(target);
}

void PresidentialPardonForm::Action(const std::string & target) const{
		std::cout << target \
		<< " has been pardoned by Zaphod Beeblebrox.\u261D" << std::endl;
}

PresidentialPardonForm:: PresidentialPardonForm(const  PresidentialPardonForm & copyFrom) : Form(copyFrom) {
	return ;
}
 PresidentialPardonForm&		 PresidentialPardonForm::operator=( PresidentialPardonForm const &) {
	return *this;
}
