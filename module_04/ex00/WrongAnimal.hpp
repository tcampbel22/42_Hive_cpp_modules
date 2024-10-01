/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:00:05 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/01 17:00:34 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal& copy);
	~WrongAnimal();
	WrongAnimal&	operator=(WrongAnimal& other);
	std::string		getType() const;
	void 	makeSound() const;
	
};