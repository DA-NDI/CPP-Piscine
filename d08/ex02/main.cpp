// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/29 19:09:05 by avolgin           #+#    #+#             //
//   Updated: 2018/06/29 22:59:23 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <list>
#include <vector>
#include "mutantstack.hpp"

int main (void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	mstack.begin();
	MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
    std::stack<int> s(mstack);
	std::cout << "s.top == " << s.top() << std::endl;
	s.pop();
	std::cout << "s.top == " << s.top() << std::endl;
	s.pop();
	std::cout << "s.top == " << s.top() << std::endl;
	s.pop();
	std::cout << "s.top == " << s.top() << std::endl;
	s.pop();
	std::cout << "s.top == " << s.top() << std::endl;
	MutantStack<std::string> mstack1;
	mstack1.push("Hello");
	mstack1.push("World");
	std::cout << mstack1.top() << std::endl;
	std::cout << mstack1.size() << std::endl;
	mstack1.push("Fourth");
	mstack1.push("Third");
	mstack1.push("Second");
	mstack1.push("First");
	mstack1.begin();
	MutantStack<std::string>::iterator it1 = mstack1.begin();
    MutantStack<std::string>::iterator ite1 = mstack1.end();
	++it1;
	--it1;
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}
    std::stack<std::string> s1(mstack1);
	std::cout << "s.top == " << s1.top() << std::endl;
	s1.pop();
	std::cout << "s.top == " << s1.top() << std::endl;
	s1.pop();
	std::cout << "s.top == " << s1.top() << std::endl;
	s1.pop();
	std::cout << "s.top == " << s1.top() << std::endl;
	s1.pop();
	std::cout << "s.top == " << s1.top() << std::endl;
	s1.pop();
	std::cout << "s.top == " << s1.top() << std::endl;
	return (0);
}
