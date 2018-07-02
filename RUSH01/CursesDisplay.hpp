/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CursesDisplay.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 19:10:32 by omartyno          #+#    #+#             */
/*   Updated: 2018/07/01 22:05:17 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURSESDISPLAY_HPP
# define CURSESDISPLAY_HPP

# include "TermParams.hpp"
# include "IMonitorModule.hpp"
# include "IMonitorDisplay.hpp"
# include "Display.hpp"
# include "DateTimeMonitor.hpp"
# include "CPUMonitor.hpp"
# include "AsciiCat.hpp"
# include "RAMMonitor.hpp"
# include "NetworkMonitor.hpp"
# include "CursesDisplay.hpp"
# include "OSInfo.hpp"
# include "CursesDisplay.hpp"
# include "HostUserMonitor.hpp"
# include <ncurses.h>
# include <list>

typedef struct	s_coor
{
	int x;
	int y;
}				t_coor;	

class CursesDisplay : public IMonitorDisplay
{
public:
	CursesDisplay( void );
	~CursesDisplay( void );

	static void			printResizeInfo(int h, int w);
	static bool			resizeInfo(int h, int w);
	static TermParams	*initilization( void );

	void				draw( void );
	void				update( void );
	void				start( void );
	
	void				update_mt();
	void				pushMonitor( IMonitorModule &mdl );

private:
	std::list<Display *>	_monitors;
	t_coor					_coormt;
	TermParams				*_mt;
};

#endif
