// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PlasmaRifle.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 09:11:49 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 13:29:00 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "AWeapon.hpp"

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

class PlasmaRifle : public AWeapon
{
private:
//PlasmaRifle(void);
public:
PlasmaRifle(std::string const & name, int apcost, int damage);
~PlasmaRifle();
PlasmaRifle(void);

// int getDamage() const;
void attack() const;
};

#endif
