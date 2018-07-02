// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 14:22:39 by avolgin           #+#    #+#             //
//   Updated: 2018/06/24 04:51:15 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <MainGame.hpp>
// #include <ncurses.h>


int main(void) {

	Ncurses *ncurses = new Ncurses(180, 40);
	ncurses->start();
//	ncurses->run();
//	while (1);
	delete ncurses;
	return (0);
}
