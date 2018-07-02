// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Star.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: oltkache <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 21:12:12 by oltkache          #+#    #+#             //
//   Updated: 2018/06/24 20:47:47 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef STAR_HPP
# define STAR_HPP

#include "GameEntity.Interface.hpp"
#include <ncurses.h>
#include <MainGame.hpp>

class Star : public GameEntity
{
public:
	Star(void);
	~Star(void);
	Star(int width, int height);
	Star(Star const & src);
	void attack(GameEntity * player, WINDOW* _window, int maxHeight);
	void move(void);
	void setHorde(EnemyHorde * bullets);
	void setBulletY(int);
	void moves(WINDOW*, int, int, int, const char*);
	void setBulletX(int);
	int getBulletX(void);
	int getBulletY(void);
	void movess(WINDOW* _window, int k, int maxWidth, int maxHeight, GameEntity *player);
	void moves(WINDOW*	_window, int, int, int, const char*, GameEntity *);
	Star & operator=(Star const &);
private:
	EnemyHorde *bullets;
	int _bulletX;
	int _bulletY;
};

#endif
