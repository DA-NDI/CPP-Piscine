// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Player.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: oltkache <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 22:19:34 by oltkache          #+#    #+#             //
//   Updated: 2018/06/23 22:19:35 by oltkache         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PLAYER_HPP
# define PLAYER_HPP

#include "GameEntity.Interface.hpp"
#include <ncurses.h>


class Player : virtual public GameEntity
{
	private:
		Player(void);
	public:
		Player(int x, int y);
		~Player(void);
		Player(Player const & );
		void move(void);
				void moves(WINDOW*	_window, int k, int maxWidth, int maxHeight, const char*);
		Player & operator=(Player const &);
};

#endif
