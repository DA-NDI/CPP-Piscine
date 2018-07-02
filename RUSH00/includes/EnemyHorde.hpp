// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   EnemyHorde.hpp                                    :+:      :+:    :+:    //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 10:58:44 by avolgin           #+#    #+#             //
//   Updated: 2018/06/24 03:51:08 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ENEMYHORDE_HPP
# define ENEMYHORDE_HPP

#include "GameEntity.Interface.hpp"
#include "Enemy.hpp"

class	EnemyHorde {
public:
	EnemyHorde(std::string type, int n);
	~EnemyHorde(void);
	void	destroy(GameEntity *entity, std::string name);
	GameEntity *newEnemie(std::string type);
	void	delEnemy(GameEntity *entity);
	int 	getNumberEnemies(void);
	Enemy *getEnemies(void);
	void    setEnemyType(GameEntity *enemy, std::string name);
	int		randomNumb(void);

private:
	EnemyHorde(void);
	Enemy		*_p;
	int			_n;
	std::string _type;
	Enemy *_enemies;
};


#endif
