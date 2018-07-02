// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ISquad.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 21:11:36 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 22:10:26 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

#include "TacticalMarine.hpp"
#include "ISpaceMarine.hpp"

class ISquad
{
public:
virtual ~ISquad() {}
virtual int getCount() const = 0;
virtual ISpaceMarine* getUnit(int) const = 0;
virtual int push(ISpaceMarine*) = 0;
};

#endif
