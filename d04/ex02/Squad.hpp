// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Squad.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 21:11:36 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 23:27:07 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"

#ifndef SQUAD_HPP
# define SQUAD_HPP

class Squad : public ISquad
{
public:
		Squad(void);
		~Squad();
		Squad(const Squad & s);
		int getCount() const;
		ISpaceMarine* getUnit(int) const;
		int push(ISpaceMarine*);
		Squad & operator=(Squad const & ncr);
private:
	int _nbSquad;
	ISpaceMarine *_marines[50];
};

#endif
