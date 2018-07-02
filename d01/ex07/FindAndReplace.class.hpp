// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FindAndReplace.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/20 11:37:08 by avolgin           #+#    #+#             //
//   Updated: 2018/06/20 11:55:11 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FINDANDREPLACE_HPP
# define FINDANDREPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>

class	FindAndReplace {
public:
	FindAndReplace(void);
	~FindAndReplace(void);
	void doit(std::string& str, std::string const& s1, std::string const& s2);
};

#endif
