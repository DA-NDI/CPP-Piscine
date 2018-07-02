// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   GameEntity.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 14:11:03 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 15:13:56 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef GAMEENTITY_INTERFACE_HPP
# define GAMEENTITY_INTERFACE_HPP

#include <iostream>
#include "ncurses.h"

class GameEntity {
private:
	
public:
	GameEntity(void);
	GameEntity(int x, int y);
	virtual ~GameEntity(void);
	GameEntity(GameEntity const & );
	virtual std::string	getType(void) const;
	virtual int getX(void) const;
	virtual int getY(void) const;
	// static int getMaxBullet(void);
	virtual void setX(unsigned int x);
	virtual void setY(unsigned int y);
	virtual void addHp(int a);
	virtual void setType(std::string _type);
	// virtual void move(void) = 0;
	virtual void moves(WINDOW*, int, int, int, const char*);
	virtual int getHp(void) const;
	virtual int checkState(void)const;
	virtual bool takeDamage(int x, int y, int dmg, GameEntity * src, WINDOW *window);
	virtual void addScore(int);
	virtual int  getScore(void);
	virtual GameEntity & operator=(GameEntity const & rhs);
protected:
	// int _maxBullet;
	std::string _type;
	int _score;
	int _startX;
	int _startY;
	int	_hp;
	int _state;
//	int	_speed;
};

#endif
