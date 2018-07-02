// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//    RobotomyRequestForm.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvino42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:54:23 by avolgin           #+#    #+#             //
//   Updated: 2018/06/26 17:37:20 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) :
	Form("Robo", 0, 0){
	this->setTarget("Default");
	return ;
}

 RobotomyRequestForm::~RobotomyRequestForm(void) {
	return ;
}

 RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	 Form("Robo", 72, 45){
	 std::srand(std::time(0));
	 this->setTarget(target);
}

void RobotomyRequestForm::Action(const std::string & target) const{
    if (rand() % 2)
		std::cout << "I make some drilling noises. " << target << " has been robotomized successfully \u2699" << std::endl;
	else
		std::cout << "Failed to robotomized" << std::endl;
	return;
}

RobotomyRequestForm:: RobotomyRequestForm(const  RobotomyRequestForm & copyFrom) : Form(copyFrom) {
	return ;
}
 RobotomyRequestForm&		 RobotomyRequestForm::operator=( RobotomyRequestForm const &) {
	return *this;
}
