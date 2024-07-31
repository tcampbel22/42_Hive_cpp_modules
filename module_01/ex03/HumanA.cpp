/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:53:45 by tcampbel          #+#    #+#             */
/*   Updated: 2024/07/31 17:44:13 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA()
{
}

HumanA::HumanA(const char *club, Weapon weapon)
{
	//pick up weapon
}

void	HumanA::attack()
{
	std::cout << HumanA::name << " attacks with " << HumanA::WeaponA.getType() << std::endl;
}

HumanA::~HumanA()
{
}