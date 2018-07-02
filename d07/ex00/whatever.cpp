// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   test.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/28 10:44:33 by avolgin           #+#    #+#             //
//   Updated: 2018/06/28 21:49:34 by avolgin          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

class A {};
class B {};
class Test {

public:

Test( int num ) : _num( num ) {}

int getInt(void) {return (this->_num);}

private:
int _num;
};

template< typename T>
T & max(T & x, T & y){
	return (x > y ? x : y);
}

template< typename T>
T & min(T & x, T  & y){
	return (x < y ? x : y);
}

template< typename T>
void swap(T & x, T  & y){
	T tmp = y;
	y = x;
	x = tmp;
}



int		main(void) {

int a = 2;
int b = 3;
float a1 = 25.f;
float b1 = 3.05f;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
::swap( a1, b1 );
std::cout << "a1 = " << a1 << ", b1 = " << b1 << std::endl;
std::cout << "min( a1, b1 ) = " << ::min( a1, b1 ) << std::endl;
std::cout << "max( a1, b1 ) = " << ::max( a1, b1 ) << std::endl;
std::cout << "Empty strings result:" << std::endl;
std::string c1 = "";
std::string d1 = "";
::swap(c1, d1);
std::cout << "c1 = " << c1 << ", d1 = " << d1 << std::endl;
std::cout << "min( c1, d1 ) = " << ::min( c1, d1 ) << std::endl;
std::cout << "max( c1, d1 ) = " << ::max( c1, d1 ) << std::endl;
Test t1(5);
Test t2(10);
std::cout << "class t1 int:= " << t1.getInt() << ", class t1 = "	\
  			<< &t1 << std::endl;
std::cout << "class t2 int: = " << t2.getInt() << ", class t2 = "	\
  		<< &t2 << std::endl;
::swap< Test >(t1, t2);
std::cout << "class t1 int:= " << t1.getInt() << ", class t1 = "	\
  			<< &t1 << std::endl;
std::cout << "class t2 int: = " << t2.getInt() << ", class t2 = "	\
  		<< &t2 << std::endl;
const int a2 = -5;
const int b2 = 5;
std::cout << "a2 = " << a2 << ", b2 = " << b2 << std::endl;
std::cout << "min( a2, b2 ) = " << ::min( a2, b2 ) << std::endl;
std::cout << "max( a2, b2 ) = " << ::max( a2, b2 ) << std::endl;

}
