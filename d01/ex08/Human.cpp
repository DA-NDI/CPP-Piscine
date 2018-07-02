// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 12:11:00 by avolgin           #+#    #+#             //
//   Updated: 2018/06/20 13:03:10 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"
#define CALL_ACTION(object,ptrToMember)  ((object)->*(ptrToMember))

void Human::meleeAttack(std::string const & target)
{
	std::cout << "meleeAttack is called, target: " << target << std::endl;
}
void Human::rangedAttack(std::string const & target)
{
	std::cout << "rangedAttack is called, target: " << target << std::endl;
}
void Human::intimidatingShout(std::string const & target)
{
	std::cout << "intimidatingShout is called, target: " << target << std::endl;
}
void Human::action(std::string const & action_name, std::string const & target)
{
std::string actions[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

typedef void (Human::*FuncPtr)(std::string const & target);
    FuncPtr functions[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

for (int i = 2; i >= 0; i--)
    if (actions[i] == action_name)
    {
        (CALL_ACTION(this, functions[i]))(target);
        break;
    }
}
