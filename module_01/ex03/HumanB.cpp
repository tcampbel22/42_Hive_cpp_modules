/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:53:35 by tcampbel          #+#    #+#             */
/*   Updated: 2024/08/01 14:53:06 by tcampbel         ###   ########.fr       */
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
	HumanB::name = name;
}

void	HumanB::attack()
{
	std::cout << HumanB::name << " attacks with " << HumanB::WeaponB->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &club)
{
	HumanB::WeaponB = &club;
}

HumanB::~HumanB()
{
}