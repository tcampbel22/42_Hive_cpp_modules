/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:46:22 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/11 15:13:39 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string club)
{
	Weapon::type = club;
}

void	Weapon::setType(std::string type)
{
	Weapon::type = type;
}

const std::string& Weapon::getType()
{
	return (Weapon::type);
}
