// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PowerFist.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 09:11:49 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 12:56:14 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "AWeapon.hpp"

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

class PowerFist : public AWeapon
{
private:
//PowerFist(void);
public:
PowerFist(std::string const & name, int apcost, int damage);
~PowerFist();
PowerFist(void);// std::string  getName() const;
// int getAPCost() const;
// int getDamage() const;
void attack() const;
};

#endif
