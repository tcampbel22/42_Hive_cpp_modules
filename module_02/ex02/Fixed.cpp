/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:43:51 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/26 11:03:16 by tcampbel         ###   ########.fr       */
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
Fixed&	Fixed::operator=(const Fixed& other){ this->fp_num = other.fp_num; return (*this); }


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

std::ostream& operator<<(std::ostream& stream, Fixed const& fixed) { return stream << fixed.toFloat(); }

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
bool	Fixed::operator>(const Fixed& other) { return (this->fp_num > other.fp_num) ? true : false; }
bool	Fixed::operator<=(const Fixed& other){ return (this->fp_num <= other.fp_num) ? true : false; }
bool	Fixed::operator>=(const Fixed& other){ return (this->fp_num >= other.fp_num) ? true : false; }
bool	Fixed::operator==(const Fixed& other){ return (this->fp_num == other.fp_num) ? true : false; }
bool	Fixed::operator!=(const Fixed& other){ return (this->fp_num != other.fp_num) ? true : false; }

							/* INCREMENT/DECREMENT */

Fixed	Fixed::operator++(int) { Fixed temp = *this; fp_num++; return temp; }

Fixed&	Fixed::operator++() { ++this->fp_num; return *this; }

Fixed	Fixed::operator--(int) { Fixed temp = *this; fp_num--; return temp; }

Fixed&	Fixed::operator--() { --this->fp_num; return *this; }

							/* MIN / MAX */

Fixed&	Fixed::min(Fixed& num1, Fixed& num2){ return (num1.fp_num > num2.fp_num) ? num2 : num1; }

Fixed&	Fixed::max(Fixed& num1, Fixed& num2) { return (num1.fp_num > num2.fp_num) ? num1 : num2; }

const Fixed&	Fixed::min(const Fixed& num1, const Fixed& num2){ return (num1.fp_num > num2.fp_num) ? num2 : num1; }

const Fixed&	Fixed::max(const Fixed& num1, const Fixed& num2) { return (num1.fp_num > num2.fp_num) ? num1 : num2; }
