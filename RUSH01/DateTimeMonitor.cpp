/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DateTimeMonitor.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 13:25:23 by omartyno          #+#    #+#             */
/*   Updated: 2018/07/01 18:38:56 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DateTimeMonitor.hpp"

DateTimeMonitor::DateTimeMonitor( void ) {
	_name = "DateTime";
	this->updateData();
}

DateTimeMonitor::DateTimeMonitor( const DateTimeMonitor & src ) {
	*this = src;
}

DateTimeMonitor::~DateTimeMonitor( void ) {}

DateTimeMonitor &	DateTimeMonitor::operator=( const DateTimeMonitor & src ) {
	_value = src.getValue();
	_name = src.getName();
	return *this;
}

void				DateTimeMonitor::updateData( void ) {
	_value = time(NULL);
}

std::string			**DateTimeMonitor::dataToString( void ) {
	if (_dataString) {
		for (size_t i = 0; _dataString[i]; i++)
			delete _dataString[i];
		delete [] _dataString;
		_dataString = NULL;
	}

	_dataString = new std::string*[3];
	char		buffer[20];

	std::strftime(buffer, sizeof(buffer), "%a %d %b", localtime(&_value));
	_dataString[0] = new std::string(buffer);
	std::strftime(buffer, sizeof(buffer), "%H:%M %S", localtime(&_value));
	_dataString[1] = new std::string(buffer);
	_dataString[2] = NULL;
	return _dataString;
}

std::string			DateTimeMonitor::getName( void ) const {
	return _name;
}

time_t				DateTimeMonitor::getValue( void ) const {
	return _value;
}
