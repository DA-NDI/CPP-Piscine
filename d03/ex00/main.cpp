// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/22 09:53:29 by avolgin           #+#    #+#             //
//   Updated: 2018/06/22 12:50:40 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include <iostream>

int		main(void)
{
	FragTrap Jack;
	Jack.beRepaired(10);
	Jack.beRepaired(10);
	Jack.beRepaired(10);
	std::cout << Jack.getHp() << std::endl;
	Jack.takeDamage(100);
	std::cout << Jack.getHp() << std::endl;
	Jack.beRepaired(10);
	std::cout << Jack.getHp() << std::endl;
	Jack.meleeAttack("sokura");
	Jack.rangedAttack("sokura");
	Jack.vaulthunter_dot_exe("Baddass");
	Jack.vaulthunter_dot_exe("bad guy");
	Jack.vaulthunter_dot_exe("himself");
	Jack.vaulthunter_dot_exe("Someone");
	Jack.vaulthunter_dot_exe("Nobody");
	Jack.vaulthunter_dot_exe("Sub-zero");
	return (0);
}
