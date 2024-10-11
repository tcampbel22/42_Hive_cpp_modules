/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:18:25 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/11 15:31:21 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure() { type = "cure"; }

Cure::Cure(const Cure& copy) { this->type = copy.type; } 

const Cure& Cure::operator=(const Cure& other) { this->type = other.type;  return *this; }

Cure::~Cure() {}

std::string	const&	Cure::getType() const { return type; }

AMateria* Cure::clone() const { return new Cure(); }

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() <<  "’s wounds *\n";
}