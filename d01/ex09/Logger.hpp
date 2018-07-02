// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Logger.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 13:09:48 by avolgin           #+#    #+#             //
//   Updated: 2018/06/20 14:19:29 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef LOGGER_HPP
# define LOGGER_HPP

#include <iostream>
#include <string>

class Logger {
public:
	Logger			 (std::string filename);
	~Logger			(void);
	void			log(std::string const & dest, std::string const & message);
private:
	void			logToConsole(std::string const &str);
	void			logToFile(std::string const &str);
	std::string		makeLogEntry(std::string &message);
	std::string 	_filename;
};

#endif
