// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: oltkache <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 21:15:25 by oltkache          #+#    #+#             //
//   Updated: 2018/06/23 21:15:26 by oltkache         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include "GameEntity.Interface.hpp"
#include <ncurses.h>
#include <unistd.h>

class Weapon : virtual public GameEntity
{
	private:
		
	public:
		Weapon(void);
		~Weapon(void);
		Weapon(int x, int y);
		Weapon(Weapon const & );
		void move(void);
		void move(WINDOW*, int y, GameEntity * game, int d);
		void makeDamage(GameEntity *ship, GameEntity *player);

		Weapon & operator=(Weapon const &);
};

#endif
