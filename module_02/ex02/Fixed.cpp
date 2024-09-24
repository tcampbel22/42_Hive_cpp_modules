/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:43:51 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/24 12:23:48 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/******************************************************************************/
							/* CONSTRUCTORS & DESTRUCTOR */

// DEFAULT
Fixed::Fixed() : fp_num(0) {}

// INTEGER CONSTRUCTOR, covert int to fixed point
Fixed::Fixed(const int num) : fp_num(num << frac_bits) {}


// FLOAT CONSTRUCTOR, convert float to fixed point
Fixed::Fixed(const float num) : fp_num(roundf((float)num * (1 << frac_bits))){}


// COPY
Fixed::Fixed(const Fixed& copy) : fp_num(copy.fp_num) {}


// COPY ASSIGNMENT OPERATOR
Fixed&	Fixed::operator=(const Fixed& other){ this->fp_num = other.getRawBits(); return (*this); }


// DESTRUCTOR
Fixed::~Fixed(){}

/******************************************************************************/
							/* GETTERS & SETTERS */
// GETTER
int		Fixed::getRawBits(void) const { return (fp_num); }


// SETTER
void	Fixed::setRawBits(int const raw) { fp_num = raw; }

/******************************************************************************/
							/* CONVERSIONS */
							
// FIXED POINT TO FLOAT
float	Fixed::toFloat(void) const { return (float)fp_num / (1 << frac_bits); }


// FIXED POINT TO INTEGER
int		Fixed::toInt(void) const { return fp_num >> frac_bits; }

/******************************************************************************/
							/* OPERATOR OVERLOADS */

// OUT STREAM OVERLOAD (<<)
std::ostream& operator<<(std::ostream& stream, Fixed const& fixed) { return stream << fixed.getRawBits(); }

							/* BASIC ARITHMETIC */
							
Fixed&	Fixed::operator+(const Fixed& other)
{
	this->fp_num = this->fp_num + other.fp_num;
	return *this;
}

Fixed&	Fixed::operator-(const Fixed& other)
{
	this->fp_num = this->fp_num - other.fp_num;
	return *this;
}

Fixed&	Fixed::operator*(const Fixed& other)
{
	this->fp_num = (this->fp_num * other.fp_num) >> frac_bits;
	return (*this);
}

Fixed&	Fixed::operator/(const Fixed& other)
{
	this->fp_num = (this->fp_num << frac_bits) / other.fp_num;
	return (*this);
}

							/* COMPARISON */
							
bool	Fixed::operator<(const Fixed& other) { return (this->fp_num < other.fp_num) ? true : false; }
bool	Fixed::operator<=(const Fixed& other){ return (this->fp_num <= other.fp_num) ? true : false; }
bool	Fixed::operator>(const Fixed& other){ return (this->fp_num > other.fp_num) ? true : false; }
bool	Fixed::operator>=(const Fixed& other){ return (this->fp_num >= other.fp_num) ? true : false; }
bool	Fixed::operator==(const Fixed& other){ return (this->fp_num == other.fp_num) ? true : false; }
bool	Fixed::operator!=(const Fixed& other){ return (this->fp_num != other.fp_num) ? true : false; }

// 							/* INCREMENT/DECREMENT */

// Fixed&	Fixed::operator++(){}
// Fixed&	Fixed::operator++(int flag){}
// Fixed&	Fixed::operator--(){}
// Fixed&	Fixed::operator--(int flag){}

// 							/* MIN / MAX */

// int&	Fixed::max(int& num1, int& num2){ (num1 > num2) ? num1 : num2; }
// int&	Fixed::min(int& num1, int& num2){ (num1 > num2) ? num2 : num1; }
// static int&	min(const int& num1, const int& num2){ (num1 > num2) ? num2 : num1; }
// static int&	max(const int& num1, const int& num2){ (num1 > num2) ? num1 : num2; }
