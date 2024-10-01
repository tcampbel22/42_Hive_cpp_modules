/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:24:09 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/01 15:48:24 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(Dog& copy);
	Dog&	operator=(Dog& other);
	~Dog();
	void	makeSound() const override;
};
