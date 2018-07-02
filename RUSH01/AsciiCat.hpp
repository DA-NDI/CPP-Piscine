/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsciiCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <omartyno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 20:55:15 by omartyno          #+#    #+#             */
/*   Updated: 2018/07/01 21:00:03 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASCIICAT_HPP
# define ASCIICAT_HPP

# include "IMonitorModule.hpp"
# include "ExecMonitor.hpp"
# include <sstream>
# include <iomanip>

class AsciiCat : public IMonitorModule
{
public:
	AsciiCat( void );
	AsciiCat( const AsciiCat & src );
	~AsciiCat( void );

	AsciiCat &	operator=( const AsciiCat & src );

	void				updateData( void );

	std::string			**dataToString( void );

	std::string			getName( void ) const;


private:
	std::string			_name;

};

#endif
