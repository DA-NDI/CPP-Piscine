// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 16:43:33 by avolgin           #+#    #+#             //
//   Updated: 2018/06/22 13:44:34 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class	ScavTrap {

public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap & fixed);
	~ScavTrap(void);
	ScavTrap & operator=(ScavTrap const & rhs);
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	std::string	getName(void) const;
	int         getHp(void);
	void		challengeNewcomer(void);
	int			getRandomNum(void);
private:

	int			_hitPoints;
	int			_maxHitPoints;
	int			_energyPoints;
	int			_maxEnergyPoints;
	int			_level;
	std::string	_name;
	const int	_armorDamageReduction;
	int			_meleeAttackDmg;
	int			_rangedAttackDmg;
	
	static int randomizer;
};

#endif
