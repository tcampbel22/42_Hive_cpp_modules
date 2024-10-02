/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:20:43 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/01 16:56:36 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() { type = "WrongAnimal"; }

WrongAnimal::WrongAnimal(WrongAnimal& copy){ this->type = copy.type; }

WrongAnimal&	WrongAnimal::operator=(WrongAnimal& other) { this->type = other.type; return *this; }

WrongAnimal::~WrongAnimal(){}

std::string	WrongAnimal::getType() const { return this->type; }

void WrongAnimal::makeSound() const { std::cout << type << " says BOOOOOOOOOOOOOOOOOOOOOOO!!!!" << std::endl; }