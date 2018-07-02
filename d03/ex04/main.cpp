// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/22 09:53:29 by avolgin           #+#    #+#             //
//   Updated: 2018/06/22 20:23:08 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <iostream>

int		main(void)
{
	SuperTrap strap1("name");
	std::cout << "Hp = " << strap1.getHp() << std::endl;
	std::cout << "MaxHp = " << strap1.getMaxHp() << std::endl;
	std::cout << "DamRedHp = " << strap1.getArmorRed() << std::endl;
	std::cout << "Energy  = " << strap1.getEnergy() << std::endl;
	std::cout << "Max Energy = " << strap1.getMaxEnergy() << std::endl;
	std::cout << "_meleeAttackDmg = " << strap1.getMeleeAttack() << std::endl;
	std::cout << "_rangedAttackDmg = " << strap1.getRangedAttack() << std::endl;
	strap1.meleeAttack("Someone");
	strap1.rangedAttack("Noone");
//	FragTrap ftrap1;
//	NinjaTrap ninja1;
	return (0);
}
