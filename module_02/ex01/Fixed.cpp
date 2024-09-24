/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:43:51 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/24 15:05:31 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// default constructor
Fixed::Fixed(){ Fixed::fp_num = 0;	std::cout << "Default constructor called" << std::endl;}


// int constructor, covert int to fixed point
Fixed::Fixed(const int num) : fp_num(num << frac_bits) {}


// float constructor, convert float to fixed point
Fixed::Fixed(const float num) : fp_num(roundf((float)num * (1 << frac_bits))){}


//copy contructor
Fixed::Fixed(const Fixed& copy) : fp_num(copy.fp_num) { std::cout << "Copy constructor called" << std::endl; }


//copy assignment operator
Fixed&	Fixed::operator=(const Fixed& other){ this->fp_num = other.fp_num; return (*this); }


//destructor
Fixed::~Fixed(){ std::cout << "Destructor called" << std::endl; }


//getter
int		Fixed::getRawBits(void) const{ return (fp_num); }


//setter
void	Fixed::setRawBits(int const raw){ fp_num = raw; }


// convert fixed point to float
float	Fixed::toFloat(void) const { return (float)fp_num / (1 << frac_bits); }


// convert fixed point to int
int		Fixed::toInt(void) const { return fp_num >> frac_bits; }


// << operator overload
std::ostream& operator<<(std::ostream& stream, Fixed const& fixed) { return stream << fixed.toFloat(); }
