/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:53:45 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/11 14:59:01 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string new_name, Weapon& weapon) : WeaponA(weapon), name(new_name)
{
}

void	HumanA::attack()
{
	std::cout << HumanA::name << " attacks with " << HumanA::WeaponA.getType() << std::endl;
}
