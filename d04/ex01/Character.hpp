// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 12:14:33 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 13:43:37 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "iostream"
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string _name;
	int _ap;
	AWeapon *weapon;
	Character(void);
public:
Character(std::string const & name);
//[...]
void	addAp(int n);
~Character();
void recoverAP();
int	getAp() const;
void	setAp(int n);
AWeapon *isWeapon() const;
void equip(AWeapon*);
void attack(Enemy*);
std::string virtual getName() const;
};

std::ostream & operator<<(std::ostream & o, Character const & rhs);
