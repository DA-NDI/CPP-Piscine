// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Intern.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:51:04 by avolgin           #+#    #+#             //
//   Updated: 2018/06/26 23:28:46 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class	Intern {

public:
	Intern(void);
	Intern(const Intern & obj);
	virtual ~Intern(void);
	virtual Form* makeForm(std::string const & formName, std::string const & targetName)throw(const char*);
	Form* robo(std::string const & target);
		Form* shrub(std::string const & target);
		Form* pres(std::string const & target);
	Intern & operator=(Intern const & src);
protected:
};

std::ostream & operator<<(std::ostream & o, Intern const &);

#endif
