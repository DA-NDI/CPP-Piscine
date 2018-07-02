// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 09:11:42 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 14:03:36 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Character.hpp"

Character::Character(std::string const & name)
	: _name(name), _ap(40), weapon(nullptr) {
	return ;
}

Character::Character(void) {
	return ;
}

Character::~Character(void) {
	return ;
}

void Character::recoverAP() {
	if ((this->_ap + 10) <= 40)
	this->_ap += 10;
}

void Character::equip(AWeapon* weapon) {
	this->weapon = weapon;
}

std::string Character::getName(void) const{
	return Character::_name;
}

int Character::getAp(void) const{
	return Character::_ap;
}

void Character::setAp(int n){
	Character::_ap = n;
}


void Character::addAp(int n){
	if ((Character::_ap + n) > 40)
		Character::setAp(40);
	else
		Character::setAp(Character::_ap + n);
}


AWeapon * Character::isWeapon(void) const{
	if (this->weapon == nullptr)
		return (nullptr);
	return (this->weapon);
}


void Character::attack(Enemy* enemy) {
	if ((this->weapon)->getName() == "Plasma  Rifle" && enemy != nullptr)
	{
		this->addAp(-5);
		std::cout << "* piouuu piouuu piouuu *" << std::endl;
		enemy->takeDamage(21);
	}
	else if ((this->weapon)->getName() == "Power Fist" && enemy != nullptr)
	{
		this->addAp(-8);
		std::cout << "* pschhh... SBAM! *" << std::endl;
		enemy->takeDamage(50);
	}
	if (this->isWeapon() != nullptr && enemy != nullptr)
	{
		std::cout << this->getName() << " attacks " << enemy->getType() << " with a " \
	  << (this->weapon)->getName() <<std::endl;
		if (enemy->getHP() <= 0)
			delete enemy;
	}
else		
	return ;

	
}

std::ostream & operator<<(std::ostream & o, Character const & rhs) {

	if (rhs.isWeapon() == nullptr)
	o << rhs.getName() << " has " << rhs.getAp() << " AP and is unarmed" << std::endl;
else		
	o << rhs.getName() << " has " << rhs.getAp() << " AP and wields a " \
	  << (rhs.isWeapon())->getName() << std::endl;
	return o;
}
