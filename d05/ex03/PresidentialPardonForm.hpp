// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//    PresidentialPardonForm.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:51:04 by avolgin           #+#    #+#             //
//   Updated: 2018/06/26 17:39:42 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <fstream>

class Bureaucrat;

class	 PresidentialPardonForm : public Form{

 public:
	 PresidentialPardonForm(void);
	 PresidentialPardonForm(std::string target);
	 PresidentialPardonForm(const  PresidentialPardonForm & copyFrom);
	 virtual ~PresidentialPardonForm(void);
	 void Action(const std::string & target)const;
	 PresidentialPardonForm & operator=( PresidentialPardonForm const &);
private:
};

#endif
