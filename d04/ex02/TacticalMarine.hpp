// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   TacticalMarine.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 21:33:19 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 23:31:58 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ISpaceMarine.hpp"
#include <iostream>

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine();
	~TacticalMarine();
	TacticalMarine(TacticalMarine const & marine);
	TacticalMarine* clone() const;
	TacticalMarine & operator=(TacticalMarine const &);
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
