// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RadScorpion.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 11:12:24 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 13:15:29 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Enemy.hpp"

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

class RadScorpion : public Enemy
{
public:
	RadScorpion(int hp, std::string const & type);
	RadScorpion(void);
	~RadScorpion(void);
	std::string getType(void) const;	
};

#endif
