/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:53:35 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/18 15:47:29 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(){
}

HumanB::HumanB(std::string name)
{
	HumanB::WeaponB = nullptr;	
	HumanB::name = name;
}

void	HumanB::attack()
{
	if (HumanB::WeaponB != nullptr)
		std::cout << HumanB::name << " attacks with " << WeaponB->getType() << std::endl;
	else
		std::cout << HumanB::name << " attacks with fists" << std::endl;
}

void	HumanB::setWeapon(Weapon &club)
{
	HumanB::WeaponB = &club;
}

HumanB::~HumanB(){
}
