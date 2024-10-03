/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:15:13 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/03 11:28:09 by tcampbel         ###   ########.fr       */
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

std::string	Animal::getType() const { return this->type; }

Animal::~Animal() { std::cout << "Animal destructor\n"; }



