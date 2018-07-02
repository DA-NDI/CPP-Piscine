// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Contact.class.hpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/18 11:05:49 by avolgin           #+#    #+#             //
//   Updated: 2018/06/18 17:42:06 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

	class Contact {
	private:
		std::string	_login;
		std::string	_postalAddress;
		std::string	_emailAddress;
		std::string	_phoneNumber;
		std::string	_birthdayDate;
		std::string	_favoriteMeal;
		std::string	_underwearColor;
		std::string	_darkestSecret;
		int	_index;
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
	public:
		Contact(void);
		~Contact(void);

		void	add(int index);
		void	print(void) const;
		void	printAll(void) const;
	};
#endif
