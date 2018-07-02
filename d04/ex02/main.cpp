// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/23 21:51:35 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 23:15:45 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "TacticalMarine.hpp"
#include "Squad.hpp"
#include "AssaultTerminator.hpp"

int main()
{
ISpaceMarine* bob = new TacticalMarine;
 ISpaceMarine* jim = new AssaultTerminator;
 ISquad* vlc = new Squad;
 vlc->push(bob);
 vlc->push(jim);
 for (int i = 0; i < vlc->getCount(); ++i)
 {
 ISpaceMarine* cur = vlc->getUnit(i);
 cur->battleCry();
 cur->rangedAttack();
 cur->meleeAttack();
 }
 delete vlc;
return 0;
}

