/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:11:23 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/03 11:23:39 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(Animal& copy);
	virtual	~Animal();
	Animal&	operator=(Animal& other);
	std::string	getType() const;
	virtual void	makeSound() const = 0;
};