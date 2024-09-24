/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:35:47 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/24 16:03:00 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(Fixed()), y(Fixed()) {}

Point::Point(float x2, float y2) : x(Fixed(x2)), y(Fixed(y2)) {}

Point::Point(const Point& copy) : x(copy.x), y(copy.y) {}

Point& Point::operator=(const Point& other) { return *this; }

Point::~Point(){}