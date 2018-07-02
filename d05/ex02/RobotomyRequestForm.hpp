// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//    RobotomyRequestForm.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:51:04 by avolgin           #+#    #+#             //
//   Updated: 2018/06/26 17:37:25 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <fstream>

class Bureaucrat;

class	 RobotomyRequestForm : public Form{

 public:
	 RobotomyRequestForm(void);
	 RobotomyRequestForm(std::string target);
	 RobotomyRequestForm(const  RobotomyRequestForm & copyFrom);
	 virtual ~RobotomyRequestForm(void);
	 void Action(const std::string & target)const;
	 RobotomyRequestForm & operator=( RobotomyRequestForm const &);
private:
};

#endif
