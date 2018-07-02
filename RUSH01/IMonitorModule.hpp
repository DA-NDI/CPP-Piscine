// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   IMonitorModule.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/30 11:48:19 by avolgin           #+#    #+#             //
//   Updated: 2018/06/30 12:26:18 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef IMONITORMODULE_HPP
# define IMONITORMODULE_HPP

# include <string>

class	IMonitorModule {

public:
	IMonitorModule( void );
	IMonitorModule( const IMonitorModule &src );
	virtual ~IMonitorModule(void);

	IMonitorModule &			operator=( const IMonitorModule &src );

	virtual std::string			**dataToString( void ) = 0;
	virtual std::string			getName( void ) const = 0;
	virtual void				updateData( void ) = 0;

protected:
	std::string					**_dataString;
};


#endif
