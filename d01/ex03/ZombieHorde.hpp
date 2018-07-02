// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 10:58:44 by avolgin           #+#    #+#             //
//   Updated: 2018/06/19 16:46:18 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class	ZombieHorde {
public:
	ZombieHorde(int N);
	~ZombieHorde(void);
	void	setZombieName(Zombie *zombak, std::string name);
	Zombie *newZombie(std::string name);
	void	announce(int N);
private:
	std::string		randomName(void);
	static int	_random;
	Zombie		*_p;
	int			_n;
};

#endif
