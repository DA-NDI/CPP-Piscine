// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 12:13:56 by avolgin           #+#    #+#             //
//   Updated: 2018/06/20 13:03:36 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Human.hpp"

int		main(void)
{

	Human human1;
	
	human1.action("meleeAttack", "1");
	human1.action("meleeAttack", "1");
	human1.action("rangedAttack", "1");
	return (0);	

}
