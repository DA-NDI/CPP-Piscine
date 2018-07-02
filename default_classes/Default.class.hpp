// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Defaul.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:51:04 by avolgin           #+#    #+#             //
//   Updated: 2018/06/25 19:11:37 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef DEFAULT_HPP
# define DEFAULT_HPP

#include <iostream>

class	Defaul {

public:
	Defaul(void);
	Defaul(const Defaul & obj);
	virtual ~Defaul(void);
	Defaul & operator=(Defaul const & src);
protected:
};

std::ostream & operator<<(std::ostream & o, Defaul const & rhs);

#endif
