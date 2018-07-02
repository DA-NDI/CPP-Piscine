// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 10:43:14 by avolgin           #+#    #+#             //
//   Updated: 2018/06/19 16:41:50 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
public:
	Zombie(std::string name = "Default");
	~Zombie(void);
	void	announce(void) const;
	void	setType(std::string type);
	void	setName(std::string name);
private:
	std::string _type;
	std::string _name;
	std::string	getType(void) const;
	std::string	getName(void) const;
};

#endif

