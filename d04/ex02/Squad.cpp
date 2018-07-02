// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Squad.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 21:11:36 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 23:15:28 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Squad.hpp"

Squad::Squad(void) :
	_nbSquad(0) {
}

Squad::~Squad() {
	int		i;

	i = 0;
	while (i < this->_nbSquad)
	{
		delete this->_marines[i];
		i++;
	}
}

int Squad::getCount() const {
	return Squad::_nbSquad;
}

Squad::Squad(const Squad & s) {
	*this = s;
}

Squad & Squad::operator=(Squad const & squad) {

	int				i;
	ISpaceMarine	*copy;

	if (this != &squad)
	{
		i = 0;
		while (i < this->_nbSquad)
		{
			copy = this->_marines[i]->clone();
			delete this->_marines[i];
			this->_marines[i] = copy;
			i++;
		}
		this->_nbSquad = squad._nbSquad;
	}
	return (*this);
}

ISpaceMarine* Squad::getUnit(int n) const {
	if (n >= 0 && n <= Squad::_nbSquad && _marines[n] != nullptr)
		return this->_marines[n];
	else
		return nullptr;
}

int Squad::push(ISpaceMarine *marine) {
	int i = 0;
	while (i < Squad::_nbSquad)
	{
		if (Squad::_marines[i] == marine)
			return 0;
		i++;
	}
	Squad::_marines[Squad::_nbSquad] = marine;
	Squad::_nbSquad++;
	return  Squad::_nbSquad;
};

