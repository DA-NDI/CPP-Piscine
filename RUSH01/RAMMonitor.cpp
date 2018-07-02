/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RAMMonitor.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 16:49:18 by omartyno          #+#    #+#             */
/*   Updated: 2018/07/01 18:40:43 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RAMMonitor.hpp"

RAMMonitor::RAMMonitor( t_top_data &td ) : ExecMonitor(td) {
	_name = "RAM";
	this->updateData();
}

RAMMonitor::RAMMonitor( const RAMMonitor & src ) : ExecMonitor(src) {}

RAMMonitor::~RAMMonitor( void ) {}

RAMMonitor &			RAMMonitor::operator=( const RAMMonitor & src ) {
	ExecMonitor::operator=( src );
	return *this;
}

void					RAMMonitor::updateData( void ) {
	this->updateTop();
}

std::string				**RAMMonitor::dataToString( void ) {
	if (_dataString) {
		for (size_t i = 0; _dataString[i]; i++)
			delete _dataString[i];
		delete [] _dataString;
		_dataString = NULL;
	}

	_dataString = new std::string*[4];
	std::stringstream	ss;
	std::ios			inState(NULL);

	inState.copyfmt(ss);

	ss << std::left << std::setw(8) << "Used:";
	ss.copyfmt(inState);
	ss << _td.ram_used;
	_dataString[0] = new std::string(ss.str());
	ss.str("");

	ss << std::left << std::setw(8) << "Wired:";
	ss.copyfmt(inState);
	ss << _td.ram_wired;
	_dataString[1] = new std::string(ss.str());
	ss.str("");

	ss << std::left << std::setw(8) << "Unused:";
	ss.copyfmt(inState);
	ss << _td.ram_unused;
	_dataString[2] = new std::string(ss.str());

	_dataString[3] = NULL;

	return _dataString;
}

std::string				RAMMonitor::getName( void ) const { return _name; }
