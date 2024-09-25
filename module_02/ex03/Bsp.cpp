/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:03:55 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/25 15:05:00 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

float tri_area(float x1, float y1, float x2, float y2, float x3, float y3)
{
	return std::abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0f);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	aX = a.getX(), aY = a.getY();
	float	bX = b.getX(), bY = b.getY();
	float	cX = c.getX(), cY = c.getY();
	float	pointX = point.getX(), pointY = point.getY();
	float	totalArea = tri_area(aX, aY, bX, bY, cX, cY);
	float	p1  = tri_area(pointX, pointY, bX, bY, cX, cY);
	float	p2  = tri_area(pointX, pointY, aX, aY, cX, cY);
	float	p3  = tri_area(pointX, pointY, aX, aY, bX, bY);
	if (!p1 || !p2 || !p3)
		return false;
	return (totalArea == p1 + p2 + p3);	
}