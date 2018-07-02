// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 17:53:43 by avolgin           #+#    #+#             //
//   Updated: 2018/06/19 20:25:14 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"
#include <iostream>

class	Human {
public:
	Human(void);
	~Human(void);
	std::string	identify(void) ;
	const Brain	&getBrain(void) ;
private:
	const Brain *_address;
};

#endif
