// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Stack.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/21 22:02:12 by avolgin           #+#    #+#             //
//   Updated: 2018/06/23 17:21:47 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef STACK_CLASS_HPP
# define STACK_CLASS_HPP

#include <MainGame.hpp>

#define MAX 1000

class Stack {
	public:
		GameEntity fstack[MAX];

		Stack(void);
		Stack(const Stack& copy);
		~Stack(void);

		bool push(Fixed f);
		GameEntity pop(void);
		bool isEmpty(void);
		GameEntity peek(void) const;
		int getTopF(void) const;
		void setTopF(int newTop);
	
	private:
		int _topF;
};

#endif
