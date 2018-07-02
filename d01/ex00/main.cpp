// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 09:01:44 by avolgin           #+#    #+#             //
//   Updated: 2018/06/19 10:31:14 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"

void	ponyOnTheHeap (void)
{
	Pony *PonyHeap = new Pony(1);
	PonyHeap->setHorn(1);
	PonyHeap->setAmountOfRainbow(9001);
	PonyHeap->displayInfo();
	std::cout << PonyHeap->getWhatDoesThePonySays() << std::endl;
	std::cout << "Number of ponies: " << PonyHeap->getNbPonys() << std::endl;
	delete PonyHeap;
	std::cout << "Number of ponies: " << PonyHeap->getNbPonys() << std::endl;
}
void	ponyOnTheStack (void)
{
	Pony PonyStack(2);
	PonyStack.setHorn(0);
	PonyStack.setAmountOfRainbow(0);
	PonyStack.displayInfo();
	std::cout << PonyStack.getNbPonys() << std::endl;
}

int		main( void )
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
