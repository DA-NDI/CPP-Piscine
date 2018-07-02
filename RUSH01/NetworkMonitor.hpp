/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NetworkMonitor.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 17:36:20 by omartyno          #+#    #+#             */
/*   Updated: 2018/07/01 17:56:07 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NETWORKMONITOR_HPP
# define NETWORKMONITOR_HPP

# include "IMonitorModule.hpp"
# include "ExecMonitor.hpp"
# include <sstream>
# include <iomanip>

class NetworkMonitor : public ExecMonitor, public IMonitorModule
{
public:
	NetworkMonitor( t_top_data & td );
	NetworkMonitor( const NetworkMonitor & src );
	~NetworkMonitor( void );

	NetworkMonitor &	operator=( const NetworkMonitor & src );

	void				updateData( void );

	std::string			**dataToString( void );

	std::string			getName( void ) const;


private:
	std::string			_name;

};

#endif
