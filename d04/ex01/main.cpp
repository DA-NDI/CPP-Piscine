// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 09:28:42 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 12:52:14 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main()
{
Character* zaz = new Character("zaz");
std::cout << *zaz;
Enemy* b = new RadScorpion();
AWeapon* pr = new PlasmaRifle();
AWeapon* pf = new PowerFist();
zaz->equip(pr);
std::cout << *zaz;
zaz->equip(pf);
zaz->attack(b);
std::cout << *zaz;
zaz->equip(pr);
std::cout << *zaz;
zaz->attack(b);
std::cout << *zaz;
zaz->attack(b);
std::cout << *zaz;
return 0;
}
