/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 11:41:39 by avolgin           #+#    #+#             */
//   Updated: 2018/06/19 12:53:38 by avolgin          ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

#include <iostream>
#include <cstdlib>

void	randomChump(void)
{
	std::srand(std::time(0));
	int counter = std::rand() % 10;
	std::string randomName;
	std::string randomType;
	std::string randstr = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	
	while (counter--)
	{
		randomName += (randstr[std::rand() % 50]);
		randomType += (randstr[std::rand() % 50]);
	}
	Zombie zombak3(randomName);
	
	zombak3.setType(randomType);
	zombak3.announce();
}

int		main(void)
{
	Zombie zombak1("NeCheloveek");
	std::cout << "Zombak1 announce: ";
	zombak1.announce();
	ZombieEvent ZombieEvent1;
	ZombieEvent1.setZombieType(&zombak1, "Alive and hungry");
	zombak1.announce();
	Zombie *zombak2 = ZombieEvent1.newZombie("Died to live");
	zombak2->announce();
	delete zombak2;
	randomChump();
	return (0);
}
	
