// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   C.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:51:04 by avolgin           #+#    #+#             //
//   Updated: 2018/06/27 21:19:00 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef C_HPP
# define C_HPP

#include <iostream>
#include "Base.class.hpp"
#include "A.class.hpp"
#include "B.class.hpp"

class A;
class B;

class	C : public Base{

public:
	C(B const & _ );
	C(A const & _ );
	C(void);
	C(const C & obj);
	virtual ~C(void);
	C & operator=(C const & src);
protected:
};

std::ostream & operator<<(std::ostream & o, C const & rhs);

#endif
