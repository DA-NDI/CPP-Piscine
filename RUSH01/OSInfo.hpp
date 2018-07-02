/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OSInfo.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 13:59:53 by omartyno          #+#    #+#             */
/*   Updated: 2018/07/01 17:54:58 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OSINFO_HPP
# define OSINFO_HPP

// # include <ctime>
# include <sstream>
# include "IMonitorModule.hpp"
# include "ExecMonitor.hpp"
# include <iostream>
// # include <locale>
# include <string>
// # include <cctype>

typedef struct	s_system_data
{
	std::string	product_name;
	std::string	product_version;
	std::string	build;
}				t_system_data;

class OSInfo : public IMonitorModule
{
public:
	OSInfo( void );
	OSInfo( const OSInfo & src );
	~OSInfo( void );

	OSInfo &	operator=( const OSInfo & src );

	void				updateData( void );

	std::string			**dataToString( void );

	std::string			getName( void ) const;

	t_system_data		getValue( void ) const;

private:
	t_system_data		_value;
	std::string			_name;
};

#endif
