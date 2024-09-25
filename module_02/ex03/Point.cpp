/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:35:47 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/25 15:12:27 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Point::Point() : x(Fixed()), y(Fixed()) {}

Point::Point(float x2, float y2) : x(x2), y(y2) {}

Point::Point(const Point& copy) : x(copy.x), y(copy.y) {}

Point&	Point::operator=(const Point& other){ return (this == &other) ? *this : *this; }

float	Point::getX() const { return this->x.toFloat(); }

float	Point::getY() const { return this->y.toFloat(); }

Point::~Point(){}
