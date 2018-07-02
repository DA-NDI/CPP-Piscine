/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ExecMonitor.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 15:45:11 by omartyno          #+#    #+#             */
/*   Updated: 2018/07/01 17:45:57 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ExecMonitor.hpp"

ExecMonitor::ExecMonitor( t_top_data &tdinit ) : _td(tdinit) {
	this->updateTop();
}

ExecMonitor::ExecMonitor( const ExecMonitor & src ) : _td(src.getTop()) {}

ExecMonitor::~ExecMonitor( void ) {}

ExecMonitor &	ExecMonitor::operator=( const ExecMonitor & src ) {
	_td = src.getTop();
	return *this;
}

std::string		ExecMonitor::exec(const char *cmd) {
	char buffer[128];
	std::string result = "";
	FILE* pipe = popen(cmd, "r");
	if (!pipe)
		throw std::runtime_error("popen() failed!");
	while (!feof(pipe)) {
		if (fgets(buffer, 128, pipe) != NULL)
			result += buffer;
	}
	pclose(pipe);
	return result;
}

void			ExecMonitor::updateTop( void ) {
	if (time(NULL) - _td.lastupdated < 3)
		return ;
	std::string	top_data = ExecMonitor::exec("top -l 1 | grep -E \"^CPU|^PhysMem|^Networks\"");

	size_t			ind = top_data.find("CPU usage:") + strlen("CPU usage:");
	std::string		cpu(top_data, ind, top_data.find("\n", ind) - ind);

	ind = top_data.find("PhysMem:") + strlen("PhysMem:");
	std::string		ram(top_data, ind, top_data.find("\n", ind) - ind);

	ind = top_data.find("Networks: packets:") + strlen("Networks: packets:");
	std::string		network(top_data, ind, top_data.find("\n", ind) - ind);

	sscanf(cpu.c_str(), "%f%% user, %f%% sys, %f%% idle", &(_td.cpu_user), &(_td.cpu_sys), &(_td.cpu_idle));
	sscanf(ram.c_str(), "%uM used (%uM wired), %uM unused.", &(_td.ram_used), &(_td.ram_wired), &(_td.ram_unused));
	sscanf(network.c_str(), "%u/%uM in, %u/%uM out.", &(_td.net_in), &(_td.net_in_mb), &(_td.net_out), &(_td.net_out_mb));
	_td.lastupdated = time(NULL);
}

t_top_data		&ExecMonitor::getTop( void ) const {
	return this->_td;
}
