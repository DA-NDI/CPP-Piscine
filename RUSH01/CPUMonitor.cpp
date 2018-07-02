/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPUMonitor.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 15:34:20 by omartyno          #+#    #+#             */
/*   Updated: 2018/07/01 18:38:39 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CPUMonitor.hpp"

CPUMonitor::CPUMonitor( t_top_data &td ) : ExecMonitor(td) {
	_name = "CPU";
	this->updateData();
}

CPUMonitor::CPUMonitor( const CPUMonitor & src ) : ExecMonitor(src) {
	*this = src;
}

CPUMonitor::~CPUMonitor( void ) {}

CPUMonitor &		CPUMonitor::operator=( const CPUMonitor & src ) {
	ExecMonitor::operator=( src );
	this->_data = src.getData();
	return *this;
}

void				CPUMonitor::updateData( void ) {
	this->updateTop();
	_data.cpu_name = ExecMonitor::exec("sysctl -n machdep.cpu.brand_string");
	_data.user = _td.cpu_user;
	_data.sys = _td.cpu_sys;
	_data.idle = _td.cpu_idle;
}

std::string			**CPUMonitor::dataToString( void ) {
	if (_dataString) {
		for (size_t i = 0; _dataString[i]; i++)
			delete _dataString[i];
		delete [] _dataString;
		_dataString = NULL;
	}

	_dataString = new std::string*[5];
	std::stringstream	ss;
	std::ios			inState(NULL);

	std::string			*cpu_name = new std::string(_data.cpu_name);
	cpu_name->erase(cpu_name->find("\n"), 1);
	_dataString[0] = cpu_name;

	inState.copyfmt(ss);

	ss << std::left << std::setw(8) << "User:";
	ss.copyfmt(inState);
	ss << _data.user << "%";
	_dataString[1] = new std::string(ss.str());
	ss.str("");

	ss << std::left << std::setw(8) << "System:";
	ss.copyfmt(inState);
	ss << _data.sys << "%";
	_dataString[2] = new std::string(ss.str());
	ss.str("");

	ss << std::left << std::setw(8) << "Idle:";
	ss.copyfmt(inState);
	ss << _data.idle << "%";
	_dataString[3] = new std::string(ss.str());

	_dataString[4] = NULL;

	return _dataString;
}

std::string			CPUMonitor::getName( void ) const {
	return this->_name;
}

t_cpu_data			CPUMonitor::getData( void ) const {
	return this->_data;
}
