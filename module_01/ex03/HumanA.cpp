/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:53:45 by tcampbel          #+#    #+#             */
/*   Updated: 2024/08/01 21:01:47 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>


HumanA::HumanA(const char *name, Weapon& weapon) : WeaponA(weapon)
{
	if (name != NULL)
		HumanA::name = name;
	else
		throw std::invalid_argument("NULL is not a name");	
}

void	HumanA::attack()
{
	std::cout << HumanA::name << " attacks with " << HumanA::WeaponA.getType() << std::endl;
}

HumanA::~HumanA()
{
}