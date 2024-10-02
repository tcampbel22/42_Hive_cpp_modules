/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:32:41 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/02 16:45:21 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{ 
	std::cout << "Cat constructor\n";
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(Cat& copy) : Animal(copy)
{ 
	std::cout << "Cat copy constructor\n";
	this->brain = new Brain();
}

Cat& Cat::operator=(Cat& other)
{
	std::cout << "Cat assignment op\n";
	this->type = other.type;
	delete this->brain;
	this->brain = new Brain(*other.brain);
	return *this;
}

Cat::~Cat()
{ 
	delete brain;
	std::cout << "Cat deconstructor deleting brain..\n";
}

void	Cat::makeSound() const { std::cout << "Meow miau!!" << std::endl; }