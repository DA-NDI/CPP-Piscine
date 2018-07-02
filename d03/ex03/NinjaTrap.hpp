// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 16:43:33 by avolgin           #+#    #+#             //
//   Updated: 2018/06/22 17:38:55 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	NinjaTrap : public ClapTrap{

public:
	NinjaTrap(void);
	NinjaTrap(std::string name);
	NinjaTrap(const NinjaTrap & clap);
	~NinjaTrap(void);
	NinjaTrap & operator=(NinjaTrap const & scav);
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		ninjaShoeBox(ClapTrap & claptrap);
	void		ninjaShoeBox(FragTrap & fragtrap);
	void		ninjaShoeBox(NinjaTrap & fragtrap);
	void		ninjaShoeBox(ScavTrap & fragtrap);
};

#endif
