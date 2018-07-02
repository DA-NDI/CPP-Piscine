// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperMutant.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 11:12:24 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 13:15:07 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Enemy.hpp"

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

class SuperMutant : public Enemy
{
private:
	int	_hpp;
public:
	SuperMutant(int hp, std::string const & type);
	~SuperMutant(void);
	void takeDamage(int dmg);
	std::string getType(void) const;
};

#endif
