// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: oltkache <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 21:12:12 by oltkache          #+#    #+#             //
//   Updated: 2018/06/23 21:12:12 by oltkache         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include "GameEntity.Interface.hpp"
#include <ncurses.h>
#include "Weapon.hpp"

class Enemy : public GameEntity
{
public:
	Enemy(void);
	~Enemy(void);
	Enemy(int width, int height);
	Enemy(Enemy const & src);
	void attack(GameEntity & entity);
	void move(void);
	void moves(WINDOW*	_window, int k, int maxWidth, int maxHeight, const char* a);
	unsigned int randomNumb(void);
	Enemy & operator=(Enemy const & src);
private:
//	int _maxHeight;
//	int _maxWidth;
};

#endif
