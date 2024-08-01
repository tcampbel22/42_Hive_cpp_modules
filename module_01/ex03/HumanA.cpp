/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:53:45 by tcampbel          #+#    #+#             */
/*   Updated: 2024/08/01 14:59:31 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>


HumanA::HumanA(const char *name, Weapon& weapon) : WeaponA(weapon)
{
	HumanA::name = name;	
}

void	HumanA::attack()
{
	std::cout << HumanA::name << " attacks with " << HumanA::WeaponA.getType() << std::endl;
}

HumanA::~HumanA()
{
}