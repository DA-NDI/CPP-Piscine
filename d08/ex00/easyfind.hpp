// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   easyfind.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/29 11:31:28 by avolgin           #+#    #+#             //
//   Updated: 2018/06/29 14:08:19 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template<typename T>
void	easyfind(T const & container, int toFind)throw(std::exception)
{
	typename T::const_iterator ite = \
		std::find (container.begin(), container.end(), toFind);
	if (ite != container.end())
		std::cout << "Element found in myints: " << *ite << std::endl;
	else
		throw std::out_of_range("toFind element is not present");
}

#endif

