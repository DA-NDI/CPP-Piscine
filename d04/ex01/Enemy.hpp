// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 11:12:24 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 11:39:06 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

#ifndef ENEMY_HPP
# define ENEMY_HPP

class Enemy
{
private:
	int _hp;
	Enemy(void);
	std::string _type;
public:
Enemy(int hp, std::string const & type);
virtual ~Enemy();
std::string virtual getType() const;
int getHP() const;
virtual void takeDamage(int);
};

#endif
