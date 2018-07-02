// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:51:04 by avolgin           #+#    #+#             //
//   Updated: 2018/06/25 18:36:58 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef DEFAULT_HPP
# define DEFAULT_HPP

#include <iostream>

class	Bureaucrat {

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
	Bureaucrat(std::string const & name, int grade);
	Bureaucrat(const Bureaucrat & obj);
	virtual ~Bureaucrat(void);
	virtual std::string  getName(void) const;
	virtual void addGrade(int);
	virtual void subGrade(int);
	virtual int getGrade(void) const;
	Bureaucrat & operator=(Bureaucrat const & );
private:
	Bureaucrat(void);
	const std::string _name;
	int			_grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
