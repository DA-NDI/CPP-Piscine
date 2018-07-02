/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ExecMonitor.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 15:40:56 by omartyno          #+#    #+#             */
/*   Updated: 2018/07/01 17:46:11 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXECMONITOR_HPP
# define EXECMONITOR_HPP

#include <stdexcept>
#include <string>
#include <ctime>

typedef struct	s_top_data
{
	float				cpu_user;
	float				cpu_sys;
	float				cpu_idle;
	unsigned int		ram_used;
	unsigned int		ram_wired;
	unsigned int		ram_unused;
	unsigned int		net_in;
	unsigned int		net_in_mb;
	unsigned int		net_out;
	unsigned int		net_out_mb;
	time_t				lastupdated;
}				t_top_data;

class ExecMonitor // : public IMonitorModule
{
public:
	ExecMonitor( t_top_data &tdinit );
	ExecMonitor( const ExecMonitor & src );
	~ExecMonitor( void );

	ExecMonitor &	operator=( const ExecMonitor & src );

	static std::string	exec(const char *cmd);
	void				updateTop( void );
	t_top_data			&getTop( void ) const;

protected:
	t_top_data			&_td;

private:
	ExecMonitor( void );
};

#endif
