/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RAMMonitor.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 16:45:36 by omartyno          #+#    #+#             */
/*   Updated: 2018/07/01 20:56:40 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAMMONITOR_HPP
# define RAMMONITOR_HPP

# include "IMonitorModule.hpp"
# include "ExecMonitor.hpp"
# include <sstream>
# include <iomanip>

class RAMMonitor : public ExecMonitor, public IMonitorModule
{
public:
	RAMMonitor( t_top_data & td );
	RAMMonitor( const RAMMonitor & src );
	~RAMMonitor( void );

	RAMMonitor &	operator=( const RAMMonitor & src );

	void				updateData( void );

	std::string			**dataToString( void );

	std::string			getName( void ) const;


private:
	std::string			_name;

};

#endif
