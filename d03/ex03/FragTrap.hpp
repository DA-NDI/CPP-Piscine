// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 16:43:33 by avolgin           #+#    #+#             //
//   Updated: 2018/06/22 15:57:43 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap{

public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap & fixed);
	~FragTrap(void);
	FragTrap & operator=(FragTrap const & rhs);
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		vaulthunter_dot_exe(std::string const & target);
};

#endif
