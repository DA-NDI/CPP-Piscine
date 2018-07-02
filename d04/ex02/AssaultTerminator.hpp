// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   TacticalMarine.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 21:33:19 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 23:30:52 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ISpaceMarine.hpp"
#include <iostream>

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTERMINATOR_HPP

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	~AssaultTerminator();
	AssaultTerminator(AssaultTerminator const & marine);
	AssaultTerminator* clone() const;
	AssaultTerminator & operator=(AssaultTerminator const &);
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
