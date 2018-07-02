// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 10:58:44 by avolgin           #+#    #+#             //
//   Updated: 2018/06/19 12:17:06 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class	ZombieEvent {
public:
	ZombieEvent(void);
	~ZombieEvent(void);
	void	setZombieType(Zombie *zombak, std::string type);
	Zombie* newZombie(std::string name);
};

#endif
