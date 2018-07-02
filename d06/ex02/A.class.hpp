// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   A.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/25 14:51:04 by avolgin           #+#    #+#             //
//   Updated: 2018/06/27 21:18:18 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef A_HPP
# define A_HPP

#include <iostream>
#include "Base.class.hpp"
#include "B.class.hpp"
#include "C.class.hpp"

class B;
class C;

class	A : public Base{

public:
	A(B const & _ );
	A(C const & _ );
	A(void);
	A(const A & obj);
	virtual ~A(void);
	A & operator=(A const & src);
protected:
};

std::ostream & operator<<(std::ostream & o, A const & rhs);

#endif
