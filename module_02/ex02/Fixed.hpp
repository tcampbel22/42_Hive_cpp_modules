/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:43:59 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/23 17:25:38 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int 				fp_num;
	static const int	frac_bits = 8;
public:
	// Constructors/Destructor

	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed& copy);
	~Fixed();
	
	// Getters & Setters
	
	int 		getRawBits(void) const;
	void 		setRawBits(int const raw);
	
	// Conversion
	
	float 		toFloat(void) const;
	int 		toInt(void) const;
	
	// Operator Overloads
	
	Fixed&		operator=(const Fixed& other);
	Fixed&		operator+();
	Fixed&		operator-();
	Fixed&		operator*(const Fixed& other);
	// Fixed&		operator/(const Fixed& other);
	// bool		operator<(const Fixed& other);
	// bool		operator<=(const Fixed& other);
	// bool		operator>(const Fixed& other);
	// bool		operator>=(const Fixed& other);
	// bool		operator==(const Fixed& other);
	// bool		operator!=(const Fixed& other);
	// Fixed&		operator++();
	// Fixed&		operator++(int flag);
	// Fixed&		operator--();
	// Fixed&		operator--(int flag);
	// int&		min(int& num1, int& num2);
	// int&		max(int& num1, int& num2);
	// static int&	min(const int& num1, const int& num2);
	// static int&	max(const int& num1, const int& num2);
};

std::ostream& operator<<(std::ostream& stream, Fixed const& fixed);

#endif