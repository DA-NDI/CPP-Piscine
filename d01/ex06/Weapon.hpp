// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 20:58:48 by avolgin           #+#    #+#             //
//   Updated: 2018/06/19 21:15:24 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class	Weapon {
public:
	Weapon(std::string type);
	~Weapon(void);
	const std::string & getType(void) const;
	void				setType(std::string type);
private:
	std::string _type;
};

#endif
