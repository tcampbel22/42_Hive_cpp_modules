/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:53:35 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/16 11:38:31 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	HumanB::WeaponB = nullptr;	
	HumanB::name = name;
}

void	HumanB::attack()
{
		std::cout << HumanB::name << " attacks with " << get_wep_b() << std::endl;
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
