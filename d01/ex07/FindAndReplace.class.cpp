// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FindAndReplace.cpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 11:38:49 by avolgin           #+#    #+#             //
//   Updated: 2018/06/20 12:09:41 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FindAndReplace.class.hpp"

FindAndReplace::FindAndReplace(void) {
	return;
}
FindAndReplace::~FindAndReplace(void) {
	return ;
}
void FindAndReplace::doit(std::string& str, std::string const& s1, std::string const& s2) {
	for(std::string::size_type i = 0; (i = str.find(s1, i)) \
            != std::string::npos;)
    {
        str.replace(i, s1.length(), s2);
        i += s2.length();
    }
}
