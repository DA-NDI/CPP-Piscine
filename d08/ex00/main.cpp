// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/29 11:42:28 by avolgin           #+#    #+#             //
//   Updated: 2018/06/29 14:17:13 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "easyfind.hpp"
#include <vector>
#include <list>

int        main(void) {
    std::vector<int> test(10);

    for (int i = 0; i < 10; i++) {
        test[i] = i + 1;
    }
    try {
        std::cout << "easyfind(test, 4)" << std::endl;
        easyfind(test, 4);
        std::cout << "easyfind(test, 42)" << std::endl;
        easyfind(test, 42);
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    std::list<int> list1;

    for (int i = 0; i < 10; i++) {
        list1.push_back(i + 1);
    }
    try {
        std::cout << "easyfind(test, 4)" << std::endl;
        easyfind(test, 4);
        std::cout << "easyfind(test, 42)" << std::endl;
        easyfind(test, 42);
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
