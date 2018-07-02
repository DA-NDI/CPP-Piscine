// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/27 20:52:34 by avolgin           #+#    #+#             //
//   Updated: 2018/06/27 22:06:25 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

class Base {
public:
	virtual ~Base(void);
};

Base::~Base(void){
}

class A : public Base{
};

class B : public Base{
};

class C:  public Base{
};

void identify_from_pointer( Base * p ) {
	if ((dynamic_cast<A*>(p)) != nullptr)
	{
		std::cout << "A" << std::endl;
		return;
	}
	else if ((dynamic_cast<B*>(p)) != nullptr)
	{
		std::cout << "B" << std::endl;
		return;
	}
	else if ((dynamic_cast<C*>(p)) != nullptr)
	{
		std::cout << "C" << std::endl;
		return;
	}
}

void identify_from_reference( Base & p ) {
	try {
		A & a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(std::bad_cast & a) {
	}
	try {
		B & b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(std::bad_cast & b) {
	}
	try {
		C & c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(std::bad_cast & c) {
	}
}

Base * generate(void) {
	int k = rand();

	if (k % 3 == 0)
		return (new A);
	if (k % 3 == 1)
		return (new B);
	if (k % 3 == 2)
		return (new C);
	else
	return nullptr;
}

int		main(void)
{
	std::srand(std::time(0));
	
	Base *base = generate();
	identify_from_pointer(base);
	Base *base1 = generate();
	identify_from_reference(*base1);
	return (0);
}

