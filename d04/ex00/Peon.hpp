// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 16:43:33 by avolgin           #+#    #+#             //
//   Updated: 2018/06/22 23:20:23 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class	Peon : public Victim {

public:
	Peon(std::string name);
	Peon(const Peon & pion);
	virtual ~Peon(void);
	Peon & operator=(Peon const & rhs);
	virtual std::string	getName(void) const;
	void	setName(std::string name);
	void getPolymorphed(void) const; 
protected:

	std::string	_name;
private:
	Peon(void);

};

std::ostream & operator<<(std::ostream & o, Peon const & rhs);

#endif
