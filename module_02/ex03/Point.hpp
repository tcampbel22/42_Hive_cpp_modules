/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:30:52 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/24 16:09:32 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed const x;
	Fixed const y;
	
public:
	Point();
	Point(float x, float y);
	Point(const Point& copy);
	Point&	operator=(const Point& other);
	~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif