/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_top_data.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 16:45:44 by omartyno          #+#    #+#             */
/*   Updated: 2018/07/01 17:07:06 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <stdexcept>
#include <stdio.h>
#include <string>

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

std::string exec(const char* cmd) {
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

int main() {
	std::string	top_data = exec("top -l 1 | grep -E \"^CPU|^PhysMem|^Networks\"");

	std::cout << top_data << std::endl;
	size_t			ind = top_data.find("CPU usage:") + strlen("CPU usage:");
	std::string		cpu(top_data, ind, top_data.find("\n", ind) - ind);

	ind = top_data.find("PhysMem:") + strlen("PhysMem:");
	std::string		ram(top_data, ind, top_data.find("\n", ind) - ind);

	ind = top_data.find("Networks: packets:") + strlen("Networks: packets:");
	std::string		network(top_data, ind, top_data.find("\n", ind) - ind);

	std::cout << cpu << std::endl << ram << std::endl << network << std::endl;

	t_top_data			my_data;
	sscanf(cpu.c_str(), "%f%% user, %f%% sys, %f%% idle", &(my_data.cpu_user), &(my_data.cpu_sys), &(my_data.cpu_idle));
	sscanf(ram.c_str(), "%uM used (%uM wired), %uM unused.", &(my_data.ram_used), &(my_data.ram_wired), &(my_data.ram_unused));
	sscanf(network.c_str(), "%u/%uM in, %u/%uM out.", &(my_data.net_in), &(my_data.net_in_mb), &(my_data.net_out), &(my_data.net_out_mb));

	std::cout << my_data.cpu_user << std::endl;
	std::cout << my_data.cpu_sys << std::endl;
	std::cout << my_data.cpu_idle << std::endl;
	std::cout << my_data.ram_used << std::endl;
	std::cout << my_data.ram_wired << std::endl;
	std::cout << my_data.ram_unused << std::endl;
	std::cout << my_data.net_in << std::endl;
	std::cout << my_data.net_in_mb << std::endl;
	std::cout << my_data.net_out << std::endl;
	std::cout << my_data.net_out_mb << std::endl;
	std::cout << my_data.lastupdated << std::endl;
}