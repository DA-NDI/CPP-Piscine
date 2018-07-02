/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NetworkMonitor.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 17:37:15 by omartyno          #+#    #+#             */
/*   Updated: 2018/07/01 18:39:22 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NetworkMonitor.hpp"

NetworkMonitor::NetworkMonitor( t_top_data &td ) : ExecMonitor(td) {
	_name = "Network";
	this->updateData();
}

NetworkMonitor::NetworkMonitor( const NetworkMonitor & src ) : ExecMonitor(src) {}

NetworkMonitor::~NetworkMonitor( void ) {}

NetworkMonitor &			NetworkMonitor::operator=( const NetworkMonitor & src ) {
	ExecMonitor::operator=( src );
	return *this;
}

void					NetworkMonitor::updateData( void ) {
	this->updateTop();
}

std::string				**NetworkMonitor::dataToString( void ) {
	if (_dataString) {
		for (size_t i = 0; _dataString[i]; i++)
			delete _dataString[i];
		delete [] _dataString;
		_dataString = NULL;
	}

	_dataString = new std::string*[3];
	std::stringstream	ss;
	std::ios			inState(NULL);

	inState.copyfmt(ss);

	ss << std::left << std::setw(8) << "In:";
	ss.copyfmt(inState);
	ss << _td.net_in << "/" << _td.net_in_mb << "M";
	_dataString[0] = new std::string(ss.str());
	ss.str("");

	ss << std::left << std::setw(8) << "Out:";
	ss.copyfmt(inState);
	ss << _td.net_out << "/" << _td.net_out_mb << "M";
	_dataString[1] = new std::string(ss.str());

	_dataString[2] = NULL;

	return _dataString;
}

std::string				NetworkMonitor::getName( void ) const { return _name; }
