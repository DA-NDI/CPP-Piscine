// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 12:11:13 by avolgin           #+#    #+#             //
//   Updated: 2018/06/20 13:07:36 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>

class Human
{
private:
void meleeAttack(std::string const & target);
void rangedAttack(std::string const & target);
void intimidatingShout(std::string const & target);
public:
void action(std::string const & action_name, std::string const & target);
};
