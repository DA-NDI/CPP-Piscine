// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Contact.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/18 11:19:30 by avolgin           #+#    #+#             //
//   Updated: 2018/06/18 19:41:58 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Contact.class.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(void){
	return ;
}

Contact::~Contact(void) {
	return ;
}
void	Contact::add(int index) {
	std::cout << "Enter first name" << std::endl;
	std::cin >> this->_firstName;
	if (this->_firstName.empty())
		exit (0);
	this->_firstName = (this->_firstName.length() > 10) ? \
		(this->_firstName.substr(0, 9)).replace(9, 1, ".") : this->_firstName;
	std::cout << "Enter last name" << std::endl;
	std::cin >> this->_lastName;
	if (this->_lastName.empty())
		exit (0);
	this->_lastName = (this->_lastName.length() > 10) ? \
		(this->_lastName.substr(0, 9)).append(".") : this->_lastName;
	std::cout << "Enter nickname" << std::endl;
	std::cin >> this->_nickname;
	if (this->_nickname.empty())
		exit (0);
	this->_nickname = (this->_nickname.length() > 10) ? \
		(this->_nickname.substr(0, 9)).replace(9, 1, ".") : this->_nickname;
	std::cout << "Enter login" << std::endl;
	std::cin.ignore();
	getline(std::cin, this->_login);
	std::cout << "Enter postal address" << std::endl;
	std::cin.ignore();
	getline(std::cin, this->_postalAddress);
	std::cout << "Enter phone number" << std::endl;
	std::cin.ignore();
	getline(std::cin, this->_phoneNumber);
	std::cout << "Enter birthday date" << std::endl;
	std::cin.ignore();
	getline(std::cin, this->_birthdayDate);
	std::cout << "Enter favorite meal" << std::endl;
	std::cin.ignore();
	getline(std::cin, this->_favoriteMeal);
 	std::cout << "Enter underwear color" << std::endl;
	std::cin.ignore();
	getline(std::cin, this->_underwearColor);
 	std::cout << "darkest secret" << std::endl;
	std::cin.ignore();
	getline(std::cin, this->_darkestSecret);
	this->_index = index;
}

void	Contact::print(void) const{
	if (this->_firstName.empty())
	{
		std::cout << "No contact entries" << std::endl;
		return ;
	}
	std::cout.width(10);
	std::cout << std::right << this->_index << "|";
	std::cout.width(10);
	std::cout << std::right << this->_firstName << "|";
	std::cout.width(10);
	std::cout << std::right << this->_lastName << "|";
	std::cout.width(10);
	std::cout << std::right << this->_nickname << std::endl;
	return ;
}

void	Contact::printAll(void) const{
	if (this->_firstName.empty())
	{
		std::cout << "No contact entries" << std::endl;
		return ;
	}
	std::cout.width(10);
	std::cout << std::right << this->_index << std::endl;
	std::cout.width(10);
	std::cout << std::right << this->_firstName << std::endl;
	std::cout.width(10);
	std::cout << std::right << this->_lastName << std::endl;
	std::cout.width(10);
	std::cout << std::right << this->_nickname << std::endl;
	std::cout << this->_login << std::endl;
	std::cout << this->_postalAddress << std::endl;
	std::cout << this->_emailAddress << std::endl;
	std::cout << this->_phoneNumber << std::endl;
	std::cout << this->_birthdayDate << std::endl;
	std::cout << this->_favoriteMeal << std::endl;
	std::cout << this->_underwearColor << std::endl;
	std::cout << this->_darkestSecret << std::endl;
	return ;
}
