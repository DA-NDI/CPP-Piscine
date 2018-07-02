/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Display.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 10:35:40 by omartyno          #+#    #+#             */
/*   Updated: 2018/07/01 19:58:11 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_HPP
# define DISPLAY_HPP

# include <ncurses.h>
# include <iostream>
# include <sstream>
# include "IMonitorModule.hpp"

class Display
{
public:
	Display( int h, int w, int x, int y, IMonitorModule &mdl );
	Display( Display const &src );
	~Display( void );

	Display &		operator=( Display const & src );

	int		getHeight( void ) const;
	int		getWidth( void ) const;
	int		getXPos( void ) const;
	int		getYPos( void ) const;
	WINDOW	*getWin( void ) const;
	int		getColor( int i ) const;
	IMonitorModule &	getMdl( void ) const;

	void	show( int x, int y );
	void	update( void );
	void	recreate( void );


private:
	Display( void );
	int				_colors[7];

	int				_height;
	int				_width;
	int				_xpos;
	int				_ypos;
	WINDOW			*_win;

	IMonitorModule	&_mdl;
};

std::ostream &	operator<<(std::ostream	& o, Display const & src );

#endif

