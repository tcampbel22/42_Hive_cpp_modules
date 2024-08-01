/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:46:22 by tcampbel          #+#    #+#             */
/*   Updated: 2024/08/01 15:10:14 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(const char* club)
{
	Weapon::type = club;
}

void	Weapon::setType(const char *type)
{
	Weapon::type = type;
}

const std::string& Weapon::getType()
{
	return (Weapon::type);
}

Weapon::~Weapon()
{
}