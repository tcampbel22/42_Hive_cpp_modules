/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:44:29 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/10 16:35:40 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() { type = "ice"; }

Ice::Ice(const Ice& copy) { this->type = copy.type; }

const Ice& Ice::operator=(const Ice& other)
{
	this->type = other.type;
	return *this;
}

Ice::~Ice() {}

std::string	const&	Ice::getType() const { return type; }

AMateria* Ice::clone() const 
{
	AMateria *clone = new Ice();
	return clone;	
}

void Ice::use(ICharacter& target) 
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*\n";	
}