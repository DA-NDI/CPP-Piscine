// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 16:43:33 by avolgin           #+#    #+#             //
//   Updated: 2018/06/22 19:22:12 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap{

public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap & clap);
	~ScavTrap(void);
	ScavTrap & operator=(ScavTrap const & scav);
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		challengeNewcomer(void);
};

#endif
