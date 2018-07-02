// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:51:04 by avolgin           #+#    #+#             //
//   Updated: 2018/06/26 17:54:03 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form {

public:
	class GradeTooHighException : public std::exception{
	public:
		GradeTooHighException(void)throw();
		~GradeTooHighException(void)throw();
		GradeTooHighException(const GradeTooHighException & obj)throw();
		virtual const char * what() const throw();
	};
	class GradeTooLowException : public std::exception{
	public:
		virtual const char * what() const throw();
		GradeTooLowException(void)throw();
		~GradeTooLowException(void)throw();
		GradeTooLowException(const GradeTooLowException & obj)throw();
	};
	Form(std::string const & name, const int formGrade, const int execGrade);
	Form(const Form & obj);
	virtual ~Form(void);
	virtual std::string  getName(void) const;
	virtual bool  getStatus(void) const;
	virtual std::string  isSigned(void) const;
	void execute(Bureaucrat const & executor) const throw(Form::GradeTooLowException);
	virtual int getFormGrade(void) const;
	virtual int getExecGrade(void) const;
	virtual std::string  getTarget(void) const;
    virtual void  setTarget(std::string target);
	void beSigned(Bureaucrat & bureaucrat)throw(Form::GradeTooLowException);
	virtual void Action(const std::string & target)const = 0;
	virtual void sign(void);
	Form & operator=(Form const &);
private:
	Form(void);
	std::string _name;
	const int	_formGrade;
	bool		_isSigned;
	const int	_execGrade;
	std::string _target;
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif
