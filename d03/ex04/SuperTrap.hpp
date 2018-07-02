// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 16:43:33 by avolgin           #+#    #+#             //
//   Updated: 2018/06/22 20:24:04 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

class	SuperTrap : public NinjaTrap, public FragTrap{

public:
	SuperTrap(void);
	SuperTrap(std::string name);
	SuperTrap(const SuperTrap & clap);
	~SuperTrap(void);
	SuperTrap & operator=(SuperTrap const & scav);
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		ninjaShoeBox(ClapTrap & claptrap);
	void		ninjaShoeBox(FragTrap & fragtrap);
	void		ninjaShoeBox(SuperTrap & fragtrap);
	void		ninjaShoeBox(ScavTrap & fragtrap);
};

#endif
