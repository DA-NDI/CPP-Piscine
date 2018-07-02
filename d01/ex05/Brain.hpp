// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 09:01:06 by avolgin           #+#    #+#             //
//   Updated: 2018/06/19 20:24:27 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class	Brain
{
public:
	Brain(void);
	~Brain(void);
	int				getBrainAge(void) const;
	void			setWeight(int weight);
	void			setAmountOfWisdom(int wisdom);
	std::string		identify(void) const;
private:
	bool 			_weight;
	int				_age;
	int				_amountOfWisdom;
};

#endif
