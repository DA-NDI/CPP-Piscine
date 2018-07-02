// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Ncurses.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 15:03:54 by avolgin           #+#    #+#             //
//   Updated: 2018/06/24 04:58:25 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef NCURSES_HPP
# define NCURSES_HPP

#include <unistd.h>
#include <iostream>
#include <ncurses.h>
#include "Weapon.hpp"
#include "Player.hpp"
#include "EnemyHorde.hpp"

class Ncurses {
private:
public:
    Ncurses(int width, int height);
    ~Ncurses(void);
    Ncurses(void);
    Ncurses(Ncurses const & );
	void run(void);
	void drawStart(void) const;
	WINDOW*	getWindow(void) const;
    std::string getState(void) const;
    Ncurses & operator=(Ncurses const & ncr);
	void	setWindow(WINDOW * wind);
	int		getWidth(void) const;
	int		getHeight(void) const;
	void	start(void);
private:
	int _maxHeight;
	int _maxWidth;
	int _width;
	int	_height;
	int	_state;
	WINDOW*	_window;
};

#endif
