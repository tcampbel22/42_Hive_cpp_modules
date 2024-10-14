/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:49:29 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/14 11:39:55 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const& type) : type(type) {}

AMateria::AMateria(const AMateria& copy) { this->type = copy.type; }

const AMateria& AMateria::operator=(const AMateria& other) 
{
	if (this != &other)
		this->type = other.type;	
	return *this; 	
}

std::string	const& AMateria::getType() const { return type; }

AMateria::~AMateria() {}