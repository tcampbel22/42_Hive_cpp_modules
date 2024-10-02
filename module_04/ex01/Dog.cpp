/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:26:23 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/02 16:16:46 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() 
{ 
	std::cout << "Dog constructor\n";
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(Dog& copy) : Animal(copy)
{ 
	std::cout << "Dog copy constructor\n";
	this->brain = new Brain(*copy.brain);
}

Dog&	Dog::operator=(Dog& other)
{
	std::cout << "Dog assignment op\n";
	this->type = other.type;
	delete brain;
	this->brain = new Brain(*other.brain);
	return *this;	
}

Dog::~Dog()
{ 
	delete brain; 
	std::cout << "Dog deconstructor deleting brain..\n";
}

void	Dog::makeSound() const { std::cout << "Woof woof/Hau Hau!!!!!" << std::endl; }