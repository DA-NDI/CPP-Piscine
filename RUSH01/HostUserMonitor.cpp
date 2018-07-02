/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HostUserMonitor.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 13:25:23 by omartyno          #+#    #+#             */
/*   Updated: 2018/07/01 20:33:12 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HostUserMonitor.hpp"
#include <vector>

HostUserMonitor::HostUserMonitor( void ) {
	this->updateData();
}

HostUserMonitor::HostUserMonitor( const HostUserMonitor & src ) {
	*this = src;
}

HostUserMonitor::~HostUserMonitor( void ) {}

HostUserMonitor &	HostUserMonitor::operator=( const HostUserMonitor & src ) {
	_name = src.getName();
	return *this;
}

void				HostUserMonitor::updateData( void ) {
//	_value = time(NULL);
}

std::string			**HostUserMonitor::dataToString( void ) {
	if (_dataString) {
		for (size_t i = 0; _dataString[i]; i++)
			delete _dataString[i];
		delete [] _dataString;
		_dataString = NULL;
	}

	_dataString = new std::string*[3];
	char		buffer[20];
	char		buffer1[20];
	FILE *name;
	name = popen("whoami", "r");
	fgets(buffer, 20, name);
	_dataString[0] = new std::string(buffer);
	_dataString[0]->erase(_dataString[0]->size() - 1);
	pclose(name);
	name = popen("hostname", "r");
	fgets(buffer1, 20, name);
	_dataString[1] = new std::string(buffer1);
	_dataString[1]->erase(_dataString[1]->size() - 1);
	_dataString[2] = NULL;
	pclose(name);
	return _dataString;
}

std::string			HostUserMonitor::getName( void ) const {
	return _name;
}

time_t				HostUserMonitor::getValue( void ) const {
	return 0;
}
