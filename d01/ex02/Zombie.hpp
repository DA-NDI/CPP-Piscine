// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 10:43:14 by avolgin           #+#    #+#             //
//   Updated: 2018/06/19 12:20:43 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
public:
	Zombie(std::string name);
	~Zombie(void);
	void	announce(void);
	void	setType(std::string type);
private:
	std::string _type;
	std::string _name;
	std::string	getType(void);
	std::string	getName(void);
};

#endif

