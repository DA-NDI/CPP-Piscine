/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsciiCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 20:55:46 by omartyno          #+#    #+#             */
/*   Updated: 2018/07/01 21:01:21 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AsciiCat.hpp"

AsciiCat::AsciiCat( void ) {
	_name = "CAT";
	this->updateData();
}

AsciiCat::AsciiCat( const AsciiCat & src ) {}

AsciiCat::~AsciiCat( void ) {}

AsciiCat &			AsciiCat::operator=( const AsciiCat & src ) {
	static_cast<void>(src);
	return *this;
}

void					AsciiCat::updateData( void ) {}

std::string				**AsciiCat::dataToString( void ) {
	if (_dataString) {
		return _dataString;
	}

	_dataString = new std::string*[8];
	_dataString[0] = new std::string(" /\\___/\\");
	_dataString[1] = new std::string("(  o o  )");
	_dataString[2] = new std::string("/   *   \\");
	_dataString[3] = new std::string("\\__\\_/__/");
	_dataString[4] = new std::string("  /   \\");
	_dataString[5] = new std::string(" / ___ \\");
	_dataString[6] = new std::string(" \\/___\\/");
	_dataString[7] = NULL;

	return _dataString;
}

std::string				AsciiCat::getName( void ) const { return _name; }

