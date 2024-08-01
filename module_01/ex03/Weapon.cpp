/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:46:22 by tcampbel          #+#    #+#             */
/*   Updated: 2024/08/01 20:59:42 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(const char* club)
{
	if (club != NULL)
		Weapon::type = club;
	else 
		throw std::invalid_argument("Weapon does not exist");
}

void	Weapon::setType(const char *type)
{
	if (type != NULL)
		Weapon::type = type;
	else
		throw std::invalid_argument("Failed to set type");
}

const std::string& Weapon::getType()
{
	return (Weapon::type);
}

Weapon::~Weapon()
{
}