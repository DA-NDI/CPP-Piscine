// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 17:46:30 by avolgin           #+#    #+#             //
//   Updated: 2018/06/19 20:23:35 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Brain.hpp"
#include "Human.hpp"

int		main(void)
{
Human bob;

std::cout << bob.identify() << std::endl;
std::cout << bob.getBrain().identify() << std::endl;
	
return (0);
}
