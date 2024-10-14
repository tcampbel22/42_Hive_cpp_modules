/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:44:29 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/14 15:36:55 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() { type = "ice"; owner = nullptr; }

Ice::Ice(const Ice& copy) { this->type = copy.type; }

const Ice& Ice::operator=(const Ice& other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

Ice::~Ice() { owner = nullptr; }

ICharacter*	Ice::getOwner() const { return owner; }

void	Ice::setOwner(ICharacter* newOwner) 
{ 
	if (newOwner != nullptr)
		this->owner = newOwner;
}

std::string	const&	Ice::getType() const { return type; }

AMateria* Ice::clone() const {  return new Ice(); }

void Ice::use(ICharacter& target) 
{	
	std::cout << "* shoots an ice bolt at " << target.getName() << "*\n";	
}