/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:30:11 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/01 15:49:17 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(Cat& copy);
	Cat& operator=(Cat& other);
	~Cat();
	void	makeSound() const override;
};
