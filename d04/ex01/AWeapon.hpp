// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWeapon.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 09:11:49 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 09:26:57 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

class AWeapon
{
private:
	AWeapon(void);
	std::string _name;
	int			_dmg;
	int			_apcost;
	
public:
AWeapon(std::string const & name, int apcost, int damage);
virtual ~AWeapon();
std::string virtual getName() const;
int getAPCost() const;
int getDamage() const;
virtual void attack() const = 0;
};

#endif
