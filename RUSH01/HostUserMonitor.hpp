/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HostUserMonitor.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 13:11:32 by omartyno          #+#    #+#             */
/*   Updated: 2018/07/01 20:31:46 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOSTUSERMONITOR_HPP
# define HOSTUSERMONITOR_HPP

# include <string>
# include "IMonitorModule.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>

class HostUserMonitor : public IMonitorModule
{
public:
	HostUserMonitor( void );
	HostUserMonitor( const HostUserMonitor & src );
	~HostUserMonitor( void );

	HostUserMonitor &	operator=( const HostUserMonitor & src );

	void				updateData( void );

	std::string			**dataToString( void );

	std::string			getName( void ) const;

	time_t				getValue( void ) const;

private:
//	time_t			_value;
	std::string		_name;
};

#endif
