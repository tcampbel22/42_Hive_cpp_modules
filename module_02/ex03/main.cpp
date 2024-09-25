/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:23:58 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/25 15:14:59 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

int main()
{
	Point a(1.0f, 1.0f), b(2.0f, 2.0f), c(3.0f, 1.0f), point1(2.0f, 1.5f);
	Point d(1.0f, 1.0f), e(2.0f, 2.0f), f(3.0f, 1.0f), point2(2.0f, 2.0f);
	Point g(-1.0f, -2.0f), h(8.5f, 2.0f), i(3.5f, 5.0f), point3(1.5f, 5.4f);
	std::cout << std::boolalpha << bsp(a,b,c, point1) << std::endl;
	std::cout << std::boolalpha << bsp(d,e,f, point2) << std::endl;
	std::cout << std::boolalpha << bsp(g,h,i, point3) << std::endl;
}
 