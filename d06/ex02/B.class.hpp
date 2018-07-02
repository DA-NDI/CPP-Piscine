// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   B.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:51:04 by avolgin           #+#    #+#             //
//   Updated: 2018/06/27 21:18:40 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef B_HPP
# define B_HPP

#include <iostream>
#include "Base.class.hpp"
#include "A.class.hpp"
#include "C.class.hpp"

class C;
class A;

class	B : public Base{

public:
	B(A const & _ );
	B(C const & _ );
	B(void);
	B(const B & obj);
	virtual ~B(void);
	B & operator=(B const & src);
protected:
};

std::ostream & operator<<(std::ostream & o, B const & rhs);

#endif
