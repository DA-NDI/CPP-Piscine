/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPUMonitor.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 17:07:06 by omartyno          #+#    #+#             */
/*   Updated: 2018/07/01 17:56:11 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPUMONITOR_HPP
# define CPUMONITOR_HPP

# include "IMonitorModule.hpp"
# include "ExecMonitor.hpp"
# include <sstream>
# include <iomanip>

typedef struct		s_cpu_data
{
	//sysctl -n machdep.cpu.brand_string
	std::string		cpu_name;
	//topdata
	float			user;
	float			sys;
	float			idle;		
}					t_cpu_data;

class CPUMonitor : public ExecMonitor, public IMonitorModule
{
public:
	CPUMonitor( t_top_data & td );
	CPUMonitor( const CPUMonitor & src );
	~CPUMonitor( void );

	CPUMonitor &	operator=( const CPUMonitor & src );

	void				updateData( void );

	std::string			**dataToString( void );

	std::string			getName( void ) const;

	t_cpu_data			getData( void ) const;


private:
	t_cpu_data			_data;
	std::string			_name;

};

#endif
