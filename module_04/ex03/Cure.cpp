/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:18:25 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/10 16:41:15 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure() { type = "cure"; }

Cure::Cure(const Cure& copy) { this->type = copy.type; } 

const Cure& Cure::operator=(const Cure& other) { this->type = other.type;  return *this; }

Cure::~Cure() {}

std::string	const&	Cure::getType() const { return type; }

AMateria* Cure::clone() const 
{
	AMateria *clone = new Cure(*this);
	return clone;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() <<  "’s wounds *\n";
}