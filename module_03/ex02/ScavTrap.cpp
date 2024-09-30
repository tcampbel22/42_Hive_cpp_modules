/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:50:01 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/30 15:00:52 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() { std::cout << "ScavTrap default constructor" << std::endl; }

ScavTrap::ScavTrap(std::string new_name)
{
	setName(new_name);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackPoints(20);
	std::cout << name << " constuctor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& copy) 
{
	this->name = copy.name;
	this->attackDamage = copy.attackDamage;
	this->energyPoints = copy.energyPoints;
	this->hitPoints = copy.hitPoints;
}


ScavTrap& ScavTrap::operator=(ScavTrap& other){ return (this == &other) ? *this : *this; }

std::string&	ScavTrap::getName() { return this->name; }
unsigned int	ScavTrap::getHitPoints() { return this->hitPoints; }
unsigned int	ScavTrap::getEnergyPoints() { return this->energyPoints; }
unsigned int	ScavTrap::getAttackPoints() { return this->attackDamage; }
void			ScavTrap::setName(std::string new_name) { this->name = new_name; }
void			ScavTrap::setHitPoints(unsigned int points){ (points < UINT_MAX) ? this->hitPoints = points : this->hitPoints = 0; }
void			ScavTrap::setEnergyPoints(unsigned int points){ (points < UINT_MAX) ? this->energyPoints = points : this->energyPoints = 0; }
void			ScavTrap::setAttackPoints(unsigned int points){ (points < UINT_MAX) ? this->attackDamage = points : this->attackDamage = 0; }

void			ScavTrap::attack(const std::string& target)
{
	if (hitPoints == 0)
		std::cout << "ScavTrap " << this->name << " is dead and cannot attack!" << std::endl;
	else if (energyPoints == 0)
		std::cout << "ScavTrap " << this->name << " has no energy and cannot attack!" << std::endl;
	else
	{
		energyPoints -= 1;
		std::cout << "ScavTrap " << this->name <<  " attacks " << target << ", causing " << attackDamage << " points of damage!" 
		<< " EP: " << this->getEnergyPoints() << std::endl;
	}
}

void			ScavTrap::beRepaired(unsigned int points)
{
	if (this->energyPoints == 0)
		std::cout << "ScavTrap " << this->name << " has no energy!" << std::endl;
	else
	{
		hitPoints += points;
		energyPoints -= 1;
		std::cout << "ScavTrap " << this->name <<  " healed " << points << " points of damage!" << " HP = " << hitPoints  << " EP = " << energyPoints << std::endl;
	}
}

void			ScavTrap::takeDamage(unsigned int points)
{
	if (points >= hitPoints)
	{
		std::cout << "ScavTrap " << this->name << " is dead!" << std::endl;
		hitPoints = 0;
	}
	else
	{
		hitPoints -= points;
		std::cout << "ScavTrap " << this->name <<  " takes " << points << " points of damage!"
		<<  " HP: " << this->getHitPoints() << std::endl;
	}
}


void 			ScavTrap::guardGate() { std::cout << "ScavTrap " << this->name << " is in Gate Keeper mode" << std::endl; }

ScavTrap::~ScavTrap(){ std::cout << "ScavTrap " << this->name << " destructor" << std::endl; }
