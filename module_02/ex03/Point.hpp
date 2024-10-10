/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:30:52 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/10 15:32:34 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

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
	float	getX() const;
	float	getY() const;
	~Point();
};

bool 		bsp( Point const a, Point const b, Point const c, Point const point);
float		tri_area(float aX, float aY, float bX, float bY, float cX, float cY);

#endif