/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:43:51 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/23 12:27:42 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//default constructor
Fixed::Fixed(){ Fixed::fp_num = 0;	std::cout << "Default constructor called" << std::endl;}

//copy contructor
Fixed::Fixed(const Fixed& copy) : fp_num(copy.fp_num) { std::cout << "Copy constructor called" << std::endl; }

//copy assignment operator
Fixed&	Fixed::operator=(const Fixed& other){ this->fp_num = other.getRawBits(); return (*this); }

//destructor
Fixed::~Fixed(){ std::cout << "Destructor called" << std::endl; }

//getter
int Fixed::getRawBits(void) const{ std::cout << "getRawBits member function called" << std::endl; return (fp_num); }

//setter
void Fixed::setRawBits(int const raw){ fp_num = raw; }