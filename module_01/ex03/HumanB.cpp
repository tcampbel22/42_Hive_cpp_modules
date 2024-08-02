/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:53:35 by tcampbel          #+#    #+#             */
/*   Updated: 2024/08/02 10:11:30 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB()
{
}

HumanB::HumanB(const char* name)
{
	HumanB::WeaponB = nullptr;
	if (name != NULL)
		HumanB::name = name;
	else
		throw std::invalid_argument("NULL is not a name");
}

void	HumanB::attack()
{
	std::cout << HumanB::name << " attacks with " << HumanB::get_wep_b() << std::endl;
}

const std::string&	HumanB::get_wep_b()
{
	std::string	fists("fists");
	std::string& ref = fists;

	if (HumanB::WeaponB != nullptr)
		return (WeaponB->getType());
	else
		return (ref);
}

void	HumanB::setWeapon(Weapon &club)
{
	HumanB::WeaponB = &club;
}

HumanB::~HumanB()
{
}