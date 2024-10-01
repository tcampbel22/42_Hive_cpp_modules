/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:15:13 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/01 15:53:41 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){ type = "Animal"; }

Animal::Animal(Animal& copy) { this->type = copy.type; }

Animal& Animal::operator=(Animal& other) 
{ 
	this->type = other.type;
	return *this; 
}

void	Animal::makeSound() const{ std::cout << type << " screeches animal noises!!" << std::endl; }

std::string	Animal::getType() const { return this->type; }

Animal::~Animal() {}



