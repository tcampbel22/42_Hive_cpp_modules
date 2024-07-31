/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:53:35 by tcampbel          #+#    #+#             */
/*   Updated: 2024/07/31 17:47:59 by tcampbel         ###   ########.fr       */
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
	//pick up weapon
}

void	HumanB::attack()
{
	std::cout << HumanB::name << " attacks with " << HumanB::WeaponB.getType() << std::endl;
}

void	setWeapon(Weapon club)
{
	//call set_type
}

HumanB::~HumanB()
{
}