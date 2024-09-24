/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:43:59 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/24 15:10:38 by tcampbel         ###   ########.fr       */
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
	
	int 				getRawBits(void) const;
	void 				setRawBits(int const raw);
	
	// Conversion
	
	float 				toFloat(void) const;
	int 				toInt(void) const;
	
	// Operator Overloads
	
	Fixed&				operator=(const Fixed& other);
	Fixed&				operator+(const Fixed & other);
	Fixed&				operator-(const Fixed& other);
	Fixed&				operator*(const Fixed& other);
	Fixed&				operator/(const Fixed& other);
	bool				operator<(const Fixed& other);
	bool				operator>(const Fixed& other);
	bool				operator<=(const Fixed& other);
	bool				operator>=(const Fixed& other);
	bool				operator==(const Fixed& other);
	bool				operator!=(const Fixed& other);
	Fixed				operator++(int);
	Fixed&				operator++();
	Fixed				operator--(int);
	Fixed&				operator--();
	static Fixed&		min(Fixed& num1, Fixed& num2);
	static Fixed&		max(Fixed& num1, Fixed& num2);
	static const Fixed&	min(const Fixed& num1, const Fixed& num2);
	static const Fixed&	max(const Fixed& num1, const Fixed& num2);
};

std::ostream& operator<<(std::ostream& stream, Fixed const& fixed);

#endif