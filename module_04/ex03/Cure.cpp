/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:18:25 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/14 15:36:25 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure() { type = "cure"; owner = nullptr; }

Cure::Cure(const Cure& copy) { this->type = copy.type; } 

const Cure& Cure::operator=(const Cure& other) { this->type = other.type;  return *this; }

Cure::~Cure() { owner = nullptr; }

std::string	const&	Cure::getType() const { return type; }

ICharacter*	Cure::getOwner() const { return owner; }

void	Cure::setOwner(ICharacter* newOwner) 
{ 
	if (newOwner != nullptr)
		this->owner = newOwner; 
}

AMateria* Cure::clone() const { return new Cure(); }

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() <<  "’s wounds *\n";
}