/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OSInfo.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:24:43 by omartyno          #+#    #+#             */
/*   Updated: 2018/07/01 17:57:38 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OSInfo.hpp"

OSInfo::OSInfo( void ) {
	_name = "OSInfo";
	this->updateData();
}

OSInfo::OSInfo( const OSInfo & src ) {
	*this = src;
}

OSInfo::~OSInfo( void ) {}

OSInfo &	OSInfo::operator=( const OSInfo & src ) {
	_value = src.getValue();
	_name = src.getName();
	return *this;
}

std::string &		triml( std::string & src ) {
	std::string::iterator	it = src.begin();

	while (std::isspace(*it) && it != src.end()) {
		it++;
	}
	src.erase(src.begin(), it);
	return src;
}

void				OSInfo::updateData( void ) {
	std::string		result = ExecMonitor::exec("sw_vers");

	size_t			ind = result.find("ProductName:") + strlen("ProductName:");
	std::string		pname(result, ind, result.find("\n", ind) - ind);

	ind = result.find("ProductVersion:") + strlen("ProductVersion:");
	std::string		pvers(result, ind, result.find("\n", ind) - ind);

	ind = result.find("BuildVersion:") + strlen("BuildVersion:");
	std::string		bvers(result, ind, result.find("\n", ind) - ind);

	_value.product_name = triml(pname);
	_value.product_version = triml(pvers);
	_value.build = triml(bvers);
}

std::string			**OSInfo::dataToString( void ) {
	if (_dataString) {
		for (size_t i = 0; _dataString[i]; i++)
			delete _dataString[i];
		delete [] _dataString;
		_dataString = NULL;
	}

	_dataString = new std::string*[2];
	std::stringstream	ss;

	ss << _value.product_name << " : " << _value.product_version << " [" <<
	_value.build << "]";
	_dataString[0] = new std::string(ss.str());
	_dataString[1] = NULL;
	return _dataString;
}

std::string			OSInfo::getName( void ) const {
	return _name;
}

t_system_data		OSInfo::getValue( void ) const {
	return _value;
}
