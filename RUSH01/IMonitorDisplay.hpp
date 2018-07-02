/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 21:52:02 by omartyno          #+#    #+#             */
/*   Updated: 2018/07/01 22:01:27 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITORDISPLAY_HPP
# define IMONITORDISPLAY_HPP

# include <string>

class	IMonitorDisplay {

public:
	virtual ~IMonitorDisplay(void) {}

	virtual void				draw( void ) = 0;
	virtual void				update( void ) = 0;
	virtual void				start( void ) = 0;
};


#endif
