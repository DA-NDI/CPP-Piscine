// ************************************************************************** //
//																			  //
//														  :::	   ::::::::	  //
//	 Logger.cpp											:+:		 :+:	:+:	  //
//													  +:+ +:+		  +:+	  //
//	 By: avolgin <marvin@42.fr>						+#+	 +:+	   +#+		  //
//												  +#+#+#+#+#+	+#+			  //
//	 Created: 2018/06/20 13:08:58 by avolgin		   #+#	  #+#			  //
//   Updated: 2018/06/20 15:18:43 by avolgin          ###   ########.fr       //
//																			  //
// ************************************************************************** //

#include "Logger.hpp"
#include <time.h>
#include <sstream>
#include <iomanip>
#include <fstream>

#define CALL_ACTION(object,ptrToMember)  ((object)->*(ptrToMember))

Logger::Logger (std::string filename) : _filename(filename) {
	std::cout << "Logger created" << std::endl;
	return ;
}

Logger::~Logger (void) {
	std::cout << "Logger destroyed" << std::endl;
	return ;
}

void		Logger::logToConsole(std::string const &str) {
	std::string s = str;
	std::cout << Logger::makeLogEntry(s) << std::endl;
	return ;
}
void		Logger::logToFile(std::string const &str) {
	std::fstream uidlFile(this->_filename, std::fstream::in \
	| std::fstream::out | std::fstream::app);
	std::string message = str;
      if (uidlFile.is_open()) 
      {
		  uidlFile << Logger::makeLogEntry(message) << std::endl;
        uidlFile.close();
      } 
      else 
      {
		  std::cout << "Cannot open file" << std::endl;
      }
	return ;
}

std::string	Logger::makeLogEntry(std::string &message) {

	std::time_t timer = std::time(nullptr);
	struct tm *timeinfo = localtime(&timer);
	char gTime[80];
	std::strftime(gTime, 80, "%x %X.",timeinfo);
	message = "[" + (std::string)gTime + "] " + message + " <" + std::to_string(message.length()) + ">";
	return message;
}
void		Logger::log(std::string const & dest, std::string const & message) {
std::string actions[] = {"logToConsole", "logToFile"};

typedef void (Logger::*FuncPtr)(std::string const & message);
FuncPtr functions[2] = {&Logger::logToConsole, &Logger::logToFile};
for (int i = 1; i >= 0; i--)
    if (actions[i] == dest)
    {
        (CALL_ACTION(this, functions[i]))(message);
        break;
    }
}
