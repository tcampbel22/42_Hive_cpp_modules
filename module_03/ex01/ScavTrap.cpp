/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:50:01 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/26 16:52:38 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() { std::cout << "Scav default constructor" << std::endl; }

ScavTrap::ScavTrap(std::string name) : new_name(name) {}

ScavTrap::ScavTrap(ScavTrap& copy) 
{
	this->name = copy.name;
	this->attackDamage = copy.attackDamage;
	this->energyPoints = copy.energyPoints;
	this->hitPoints = copy.hitPoints;
}

ScavTrap::~ScavTrap(){ std::cout << "ScavTrap Destructor" << std::endl; }

ScavTrap& ScavTrap::operator=(ScavTrap& other){ return (this == &other) ? *this : *this; }

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << new_name << " is in Gate Keeper mode" << std::endl;
}

