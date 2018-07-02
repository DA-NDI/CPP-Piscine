// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Account.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/18 19:47:09 by avolgin           #+#    #+#             //
//   Updated: 2018/06/18 22:58:31 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Account.class.hpp"

Account::Account(int initial_deposit){
	this->_accountIndex = _nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = 0;
	this->_amount += initial_deposit;
	Account::_totalAmount += initial_deposit;
	std::cout << "[20150406_153629] " << "index:" << this->_accountIndex << \
	";amount:" << this->_amount << ";created" << std::endl;
	Account::_nbAccounts += 1;
	return ;
}
Account::~Account(void){
	std::cout << "[20150406_153629] " << "index:" << this->_accountIndex << \
	";amount:" << this->_amount << ";closed" << std::endl;
	Account::_nbAccounts -= 1;
	return ;
}
void		Account::makeDeposit(int deposit) {
	
	Account::_totalNbDeposits += 1;
	this->_nbDeposits += 1;
	Account::_totalAmount += deposit;
	std::cout << "[20150406_153629] " << "index:" << this->_accountIndex << \
	";p_amount:" << Account::checkAmount() << ";deposit:" << deposit \
	<< ";amount:" << Account::checkAmount() + deposit		  \
	<< ";nb_deposits:" <<this->_nbDeposits << std::endl;

	this->_amount += deposit;
}
bool	Account::makeWithdrawal(int withdrawal) {
	if (this->_amount - withdrawal >= 0)
	{
		Account::_totalNbWithdrawals += 1;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals += 1;
		std::cout << "[20150406_153629] " << "index:" << this->_accountIndex << \
		";p_amount:" << Account::checkAmount() << ";withdrawal:" << \
		withdrawal << ";amount:" << Account::checkAmount() - withdrawal \
		<< ";nb_withdrawals:" <<this->_nbWithdrawals << std::endl;
		this->_amount -= withdrawal;
		return (1);
	}
	else
	{
		std::cout << "[20150406_153629] " << "index:" << this->_accountIndex << \
		";p_amount:" << Account::checkAmount() << ";withdrawal:refused" << std::endl;
		return (0);
	}
}

int		Account::checkAmount(void) const {
	return this->_amount;
}

void	Account::displayAccountsInfos(void) {

	std::cout << "[20150406_153629] " << "accounts:" << Account::getNbAccounts() << \
	";total:" << Account::getTotalAmount() << ";deposits:" << \
	Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() \
	<< std::endl;
}
void	Account::displayStatus(void) const {
	std::cout << "[20150406_153629] " << "index:" << this->_accountIndex << \
	";amount:" << Account::checkAmount() << ";deposits:" << \
	this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals \
	<< std::endl;
}

void _displayTimestamp(void)
{
	std::cout << "[20150406_153629]";
}

int		Account::getNbAccounts( void ) {
	return Account::_nbAccounts;
}

int		Account::getTotalAmount( void ) {
	return Account::_totalAmount;
}

int		Account::getNbDeposits( void ) {
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals( void ) {
	return Account::_totalNbWithdrawals;
}

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;
