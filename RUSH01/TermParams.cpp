/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TermParams.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 10:16:08 by omartyno          #+#    #+#             */
/*   Updated: 2018/07/01 20:07:39 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TermParams.hpp"

TermParams::TermParams( void ) {
	getmaxyx(stdscr, this->_height, this->_width);
}

TermParams::TermParams( TermParams const &src ) {
	*this = src;
}

TermParams &	TermParams::operator=( TermParams const & src ) {
	this->_height = src.getHeight();
	this->_width = src.getWidth();
	return *this;
}

int		TermParams::getHeight( void ) const {
	return this->_height;
}
int		TermParams::getWidth( void ) const {
	return this->_width;
}

void	TermParams::update( void ) {
	getmaxyx(stdscr, this->_height, this->_width);
}

std::ostream &	operator<<(std::ostream	& o, TermParams const & src ) {
	o << "TermParams is [" << src.getHeight() << ":" << src.getWidth() << "]";
	return o;
}
