// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/22 21:30:01 by avolgin           #+#    #+#             //
//   Updated: 2018/06/22 22:53:14 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Nobody.hpp"

int		main(void)
{
	// Sorcerer sorcerer1("Mag", "Beginner");
	// std::cout << sorcerer1 << std::endl;
	// Victim victim1("ollo");
	// std::cout << victim1 << std::endl;
	// Pion pion1("pion");
	// std::cout << pion1 << std::endl;
	// sorcerer1.polymorph(pion1);
	// sorcerer1.polymorph(victim1);
	// sorcerer1.polymorph(pion1);
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
//	Nobody nobody("nobody");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
//	robert.polymorph(nobody);
	return (0);
}
