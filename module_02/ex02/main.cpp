/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:42:40 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/26 13:31:18 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

// int main( void ) 
// {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) + Fixed( 2 ));
// 	Fixed c;

// 	a = Fixed(109);
// 	c  =  a + b;
	
// 	std::cout << "***********ADDITION***********\n" << std::endl; 
// 	std::cout << "B int value: " << b.toInt() << std::endl;
// 	std::cout << "B float value: " << b.toFloat() << std::endl;
// 	std::cout << "C int value: " << c.toInt() << std::endl;
// 	std::cout << "C float value: " << c.toFloat() << std::endl;
	
// 	Fixed const d(20);
// 	c = a - d;
// 	std::cout << "\n***********SUBTRACTION***********\n" << std::endl;
// 	std::cout << "D int value: " << d.toInt() << std::endl;
// 	std::cout << "D float value: " << d.toFloat() << std::endl;
// 	std::cout << "C int value: " << c.toInt() << std::endl;
// 	std::cout << "C float value: " << c.toFloat() << std::endl;

// 	Fixed const e(Fixed(200) * Fixed(10.05f));
// 	std::cout << "\n***********MULTIPLICATION***********\n" << std::endl;
// 	std::cout << "E int value: " << e.toInt() << std::endl;
// 	std::cout << "E float value: " << e.toFloat() << std::endl;
	
// 	Fixed const f(Fixed(100) / Fixed(10.05f));
// 	std::cout << "\n***********DIVISION***********\n" << std::endl;
// 	std::cout << "F int value: " << f.toInt() << std::endl;
// 	std::cout << "F float value: " << f.toFloat() << std::endl;
	
// 	bool result = a < b;	
// 	std::cout << "\n***********COMPARISON***********\n" << std::endl;
// 	std::cout << "A = " << a.toInt() << " B = " << b.toFloat() << std::endl;
// 	std::cout << "Is A smaller than B: " << std::boolalpha << result << std::endl;
// 	result = a <= b;
// 	std::cout << "Is A smaller or equal to B: " << std::boolalpha << result << std::endl;
// 	result = a > b;
// 	std::cout << "Is A greater than B: " << std::boolalpha << result << std::endl;
// 	result = a >= b;
// 	std::cout << "Is A greater than or equal to B: " << std::boolalpha << result << std::endl;
// 	result = a == b;
// 	std::cout << "Is A equal to B: " << std::boolalpha << result << std::endl;
// 	result = a != b;
// 	std::cout << "Is A NOT equal B: " << std::boolalpha << result << std::endl;
	
// 	Fixed g(0);
// 	std::cout << "\n***********INCREMENT***********\n" << std::endl;
	
// 	std::cout << "G: " << g << std::endl;
// 	std::cout << "G: " << ++g << std::endl;
// 	std::cout << "G: " << g << std::endl;
// 	std::cout << "G: " << g++ << std::endl;
// 	std::cout << "G: " << g << std::endl;
	
// 	std::cout << "\n***********DECREMENT***********\n" << std::endl;
// 	std::cout << "G: " << g-- << std::endl;
// 	std::cout << "G: " << g << std::endl;
// 	std::cout << "G: " << g-- << std::endl;
// 	std::cout << "G: " << g << std::endl;
	
// 	a = Fixed(96.98f);
// 	std::cout << "\n***********MIN***********\n" << std::endl;
// 	std::cout << "A = " << a << " B = " << b << std::endl;
// 	std::cout << "Which is smaller, A or B (const): " << Fixed::min(a, b) << std::endl;
// 	std::cout << "A = " << a << " D = " << d << std::endl;
// 	std::cout << "Which is smaller, A or D: " << Fixed::min(a, d) << std::endl;
	
// 	std::cout << "\n***********MAX***********\n" << std::endl;
// 	std::cout << "A = " << a << " B = " << b << std::endl;
// 	std::cout << "Which is bigger, A or B (const): " << Fixed::max(a, b) << std::endl;
// 	std::cout << "A = " << a << " D = " << d << std::endl;
// 	std::cout << "Which is bigger, A or D: " << Fixed::max(a, d) << std::endl;
// 	return 0;
// }

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}