/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:15:02 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/30 15:32:35 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("ClapTrap"), hitPoints(10), energyPoints(10), attackDamage(0) 
{
	std::cout << "ClapTrap default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string new_name) : name(new_name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap name constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{ 
	this->name = copy.name;
	this->attackDamage = copy.attackDamage;
	this->energyPoints = copy.energyPoints;
	this->hitPoints = copy.hitPoints;
}

ClapTrap&	ClapTrap::operator=(ClapTrap& other)
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
		std::cout << "ClapTrap " << name <<  " attacks " << target << ", causing " << attackDamage << " points of damage!" 
		<< " EP: " << this->getEnergyPoints() << std::endl;
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= hitPoints)
	{
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
		hitPoints = 0;
	}
	else
	{
		hitPoints -= amount;
		std::cout << "ClapTrap " << this->name <<  " takes " << amount << " points of damage!"
		<<  " HP: " << this->getHitPoints() << std::endl;
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints == 0)
		std::cout << "ClapTrap " << this->name << " has no energy and cannot repair!" << std::endl;
	else
	{
		hitPoints += amount;
		energyPoints -= 1;
		std::cout << "ClapTrap " << this->name <<  " healed " << amount << " points of damage!" << " HP = " << hitPoints  << " EP = " << energyPoints << std::endl;
	}
}
unsigned int	ClapTrap::getHitPoints(){ return this->hitPoints; }
unsigned int	ClapTrap::getEnergyPoints(){ return this->energyPoints; }
unsigned int	ClapTrap::getAttackPoints(){ return this->attackDamage; }
void			ClapTrap::setHitPoints(unsigned int points){ (points < UINT_MAX) ? this->hitPoints = points : this->hitPoints = 0; }
void			ClapTrap::setEnergyPoints(unsigned int points){ (points < UINT_MAX) ? this->energyPoints = points : this->energyPoints = 0; }
void			ClapTrap::setAttackPoints(unsigned int points){ (points < UINT_MAX) ? this->attackDamage = points : this->attackDamage = 0; }

ClapTrap::~ClapTrap(){ std::cout << "ClapTrap " << name << " destructor" << std::endl; }
