/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DateTimeMonitor.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 13:11:32 by omartyno          #+#    #+#             */
/*   Updated: 2018/07/01 17:55:48 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATETIMEMONITOR_HPP
# define DATETIMEMONITOR_HPP

# include <ctime>
# include <string>
# include "IMonitorModule.hpp"

class DateTimeMonitor : public IMonitorModule
{
public:
	DateTimeMonitor( void );
	DateTimeMonitor( const DateTimeMonitor & src );
	~DateTimeMonitor( void );

	DateTimeMonitor &	operator=( const DateTimeMonitor & src );

	void				updateData( void );

	std::string			**dataToString( void );

	std::string			getName( void ) const;

	time_t				getValue( void ) const;

private:
	time_t			_value;
	std::string		_name;
};

#endif
