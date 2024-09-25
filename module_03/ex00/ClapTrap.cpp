/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:15:02 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/25 17:30:27 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("ClapTrap"), hitPoints(10), energyPoints(10), attackDamage(0) {}

ClapTrap::ClapTrap(std::string new_name) : name(new_name), hitPoints(10), energyPoints(2), attackDamage(0) {}

ClapTrap::ClapTrap(const ClapTrap& copy)
{ 
	this->name = copy.name;
	this->attackDamage = copy.attackDamage;
	this->energyPoints = copy.energyPoints;
	this->hitPoints = copy.hitPoints;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	if (this == &other)
		return *this ;
	this->name = other.name;
	this->attackDamage = other.attackDamage;
	this->energyPoints = other.energyPoints;
	this->hitPoints = other.hitPoints;
	return *this;
}


void ClapTrap::attack(const std::string& target)
{
	if (hitPoints == 0)
		std::cout << "ClapTrap " << name << " is dead and cannot attack!" << std::endl;
	else if (energyPoints == 0)
		std::cout << "ClapTrap " << name << " has no energy!" << std::endl;
	else
	{
		energyPoints -= 1;
		std::cout << "ClapTrap " << name <<  " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= hitPoints)
	{
		std::cout << "ClapTrap " << name << " is dead!" << std::endl;
		hitPoints = 0;
	}
	else
	{
		std::cout << "ClapTrap " << name <<  " takes " << amount << " points of damage!" << std::endl;  
		hitPoints -= amount;
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints == 0)
		std::cout << "ClapTrap " << name << " has no energy!" << std::endl;
	else
	{
		hitPoints += amount;
		energyPoints -= 1;
		std::cout << "ClapTrap " << name <<  " healed " << amount << " points of damage!" << " HP = " << hitPoints  << " EP = " << energyPoints << std::endl;
	}
}


ClapTrap::~ClapTrap(){}
