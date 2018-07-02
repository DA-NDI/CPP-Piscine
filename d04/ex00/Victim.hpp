// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 16:43:33 by avolgin           #+#    #+#             //
//   Updated: 2018/06/22 23:19:56 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class	Victim {

public:
	Victim(std::string name);
	Victim(const Victim & fixed);
	Victim(void);
	virtual ~Victim(void);
	Victim & operator=(Victim const & rhs);
	virtual std::string	getName(void) const;
	void	setName(std::string name);
	void getPolymorphed(void) const; 
protected:

	std::string	_name;
	
};

std::ostream & operator<<(std::ostream & o, Victim const & rhs);

#endif
