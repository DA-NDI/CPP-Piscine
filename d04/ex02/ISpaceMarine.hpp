// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ISpaceMarine.hpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 21:32:15 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 21:53:25 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class ISpaceMarine
{
public:
virtual ~ISpaceMarine() {}
virtual ISpaceMarine* clone() const = 0;
virtual void battleCry() const = 0;
virtual void rangedAttack() const = 0;
virtual void meleeAttack() const = 0;
};

#endif
