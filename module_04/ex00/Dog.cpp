/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:26:23 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/01 15:48:31 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() { type = "Dog"; }

Dog::Dog(Dog& copy) { this->type = copy.type; }

Dog&	Dog::operator=(Dog& other)
{
	this->type = other.type;
	return *this;	
}

Dog::~Dog(){}

void	Dog::makeSound() const { std::cout << "Woof woof/Hau Hau!!!!!" << std::endl; }