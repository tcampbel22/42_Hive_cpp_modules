/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:32:41 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/01 15:49:07 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){ type = "Cat"; }

Cat::Cat(Cat& copy) { this->type = copy.type; }

Cat& Cat::operator=(Cat& other)
{
	this->type = other.type;
	return *this;
}

Cat::~Cat(){}

void	Cat::makeSound() const { std::cout << "Meow miau!!" << std::endl; }