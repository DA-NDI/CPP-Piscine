/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorModule.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 21:47:01 by omartyno          #+#    #+#             */
/*   Updated: 2018/07/01 21:50:50 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMonitorModule.hpp"

IMonitorModule::IMonitorModule( void ) : _dataString(NULL) {}

IMonitorModule::IMonitorModule( const IMonitorModule &src ) : _dataString(NULL) { static_cast<void>(src); }

IMonitorModule::~IMonitorModule( void ) {
	if (_dataString) {
			for (size_t i = 0; _dataString[i]; i++)
				delete _dataString[i];
			delete [] _dataString;
			_dataString = NULL;
		}
}

IMonitorModule &	IMonitorModule::operator=( const IMonitorModule &src ) { static_cast<void>(src); return *this; }
