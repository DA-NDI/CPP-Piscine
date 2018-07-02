// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 16:43:33 by avolgin           #+#    #+#             //
//   Updated: 2018/06/22 17:41:31 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap {

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap & fixed);
	~ClapTrap(void);
	ClapTrap & operator=(ClapTrap const & rhs);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	std::string	getName(void) const;
	int         getHp(void)const;
	int			getMaxHp(void)const;
	void		setName(std::string name);
	void        setHp(unsigned int hp);
	void        addEnergy(unsigned int energy);
	void        subEnergy(unsigned int energy);
	int			getRandomNum(void);
	int			getArmorRed(void) const;
protected:

	int			_hitPoints;
	int			_maxHitPoints;
	int			_energyPoints;
	int			_maxEnergyPoints;
	int			_level;
	std::string	_name;
	int			_armorDamageReduction;
	int			_meleeAttackDmg;
	int			_rangedAttackDmg;
};

#endif
