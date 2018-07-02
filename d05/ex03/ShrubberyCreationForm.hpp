// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//    ShrubberyCreationForm.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:51:04 by avolgin           #+#    #+#             //
//   Updated: 2018/06/26 17:58:08 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <fstream>

class Bureaucrat;

class	 ShrubberyCreationForm : public Form{

 public:
	 ShrubberyCreationForm(void);
	 ShrubberyCreationForm(std::string target);
	 ShrubberyCreationForm(const  ShrubberyCreationForm & copyFrom);
	 virtual ~ShrubberyCreationForm(void);
	 void Action(const std::string & target)const;
	 ShrubberyCreationForm & operator=( ShrubberyCreationForm const &);
private:
};

#endif
