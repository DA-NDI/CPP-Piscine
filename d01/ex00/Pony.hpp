// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 09:01:06 by avolgin           #+#    #+#             //
//   Updated: 2018/06/19 10:07:52 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class	Pony
{
public:
	Pony(int age);
	~Pony(void);
	std::string	getWhatDoesThePonySays(void) const;
	int			getPonyAge(void) const;
	void		setHorn(bool horn);
	void		setAmountOfRainbow(int rainbow);
	void		displayInfo(void) const;
	static int	getNbPonys(void);
	
private:
	bool 		_isHorn;
	int			_ponyAge;
	int			_amountOfRainbow;
	std::string _whatDoesThePonySays;
	static int	_nbPonys;
};

#endif
