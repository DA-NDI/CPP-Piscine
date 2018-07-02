// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 10:58:33 by avolgin           #+#    #+#             //
//   Updated: 2018/06/19 16:46:47 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) {
	std::cout << "Zombie horde created" << std::endl;
	if (N <= 0)
		return ;
	this->_n = N;
	Zombie *orda = new Zombie[N];
	int i = 0;
	while (i < N)
	{
		ZombieHorde::setZombieName(&(orda[i]), ZombieHorde::randomName());
		i++;
	}
	this->_p = orda;
	ZombieHorde::announce(N);
	return ;
}

ZombieHorde::~ZombieHorde(void) {
	std::cout << "Zombie horde destroyed" << std::endl;
	if (this->_n > 0)
		delete [] this->_p;
	return ;
}

void    ZombieHorde::setZombieName(Zombie *zombak, std::string name) {
	zombak->setName(name);
}

std::string	ZombieHorde::randomName(void)
{
    std::srand(std::time(0));
    int counter = (std::rand() + ZombieHorde::_random) % 10;
	counter = (counter == 0) ? 1 : counter;
    std::string randomName;
    std::string randomType;
    std::string randstr = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

	ZombieHorde::_random += 99;
    while (counter--)
    {
        randomName += (randstr[(ZombieHorde::_random + std::rand()) % 50]);
        randomType += (randstr[(ZombieHorde::_random + std::rand()) % 50]);
    }
	return randomName;
}

void	ZombieHorde::announce(int N)
{
	int i = -1;
	while (++i < N)
		this->_p[i].announce();
}

int		ZombieHorde::_random = 5;
