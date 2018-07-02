// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Child.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:51:04 by avolgin           #+#    #+#             //
//   Updated: 2018/06/25 19:12:19 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef DEFAULT_HPP
# define DEFAULT_HPP
#include "Default.class.hpp"

#include <iostream>

class	Child : public Defaul{

public:
	Child(void);
	Child(const Child & obj);
	virtual ~Child(void);
	Child & operator=(Child const & src);
protected:
};

std::ostream & operator<<(std::ostream & o, Child const & rhs);

#endif
