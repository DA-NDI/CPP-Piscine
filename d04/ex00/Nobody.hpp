// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Nobody.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 16:43:33 by avolgin           #+#    #+#             //
//   Updated: 2018/06/22 22:45:56 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef NOBODY_HPP
# define NOBODY_HPP

#include <iostream>
#include "Victim.hpp"

class	Nobody : public Victim {

public:
	Nobody(std::string name);
	Nobody(const Nobody & pion);
	virtual ~Nobody(void);
	Nobody & operator=(Nobody const & rhs);
	std::string	getName(void) const;
	void	setName(std::string name);
	void getPolymorphed(void) const; 
protected:

	std::string	_name;
private:
	Nobody(void);

};

std::ostream & operator<<(std::ostream & o, Nobody const & rhs);

#endif
