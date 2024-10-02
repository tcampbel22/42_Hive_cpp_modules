/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:15:13 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/02 15:24:01 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{ 
	std::cout << "Animal constructor\n";
	type = "Animal"; 
}

Animal::Animal(Animal& copy) 
{ 
	std::cout << "Animal copy constructor\n";
	this->type = copy.type; 
}

Animal& Animal::operator=(Animal& other) 
{ 
	this->type = other.type;
	return *this; 
}

void	Animal::makeSound() const{ std::cout << type << " screeches animal noises!!" << std::endl; }

std::string	Animal::getType() const { return this->type; }

Animal::~Animal() { std::cout << "Animal destructor\n"; }



