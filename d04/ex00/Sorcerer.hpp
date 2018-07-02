// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 16:43:33 by avolgin           #+#    #+#             //
//   Updated: 2018/06/22 22:48:32 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"
#include "Nobody.hpp"

class	Sorcerer {

public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer & fixed);
	virtual ~Sorcerer(void);
	Sorcerer & operator=(Sorcerer const & rhs);
	std::string	getName(void) const;
	std::string	getTitle(void) const;
	void	setName(std::string name);
	void	setTitle(std::string title);
	void polymorph(Victim const & victim) const;
	void polymorph(Peon const & pion) const;
	void polymorph(Nobody const & nobody) const;
private:

	std::string	_name;
	std::string	_title;
	Sorcerer(void);
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);

#endif
