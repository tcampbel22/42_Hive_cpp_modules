/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:43:59 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/18 13:55:20 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int 		fp_num = 0;
	const int	frac_num = 0;
public:
	Fixed();
	Fixed(const Fixed& copy);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif