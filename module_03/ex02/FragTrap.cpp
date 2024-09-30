/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:36:16 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/30 14:56:11 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() { std::cout << "FragTrap default constructor" << std::endl; }

FragTrap::FragTrap(std::string new_name)
{
	setName(new_name);
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackPoints(30);
	std::cout << name << " constuctor called" << std::endl;
}

FragTrap::FragTrap(FragTrap& copy) 
{
	this->name = copy.name;
	this->attackDamage = copy.attackDamage;
	this->energyPoints = copy.energyPoints;
	this->hitPoints = copy.hitPoints;
}


FragTrap& FragTrap::operator=(FragTrap& other){ return (this == &other) ? *this : *this; }

std::string		FragTrap::getName() { return name; }
unsigned int	FragTrap::getHitPoints() { return hitPoints; }
unsigned int	FragTrap::getEnergyPoints() { return energyPoints; }
unsigned int	FragTrap::getAttackPoints() { return attackDamage; }
void			FragTrap::setName(std::string new_name) { this->name = new_name; }
void			FragTrap::setHitPoints(unsigned int points){ (points < UINT_MAX) ? this->hitPoints = points : this->hitPoints = 0; }
void			FragTrap::setEnergyPoints(unsigned int points){ (points < UINT_MAX) ? this->energyPoints = points : this->energyPoints = 0; }
void			FragTrap::setAttackPoints(unsigned int points){ (points < UINT_MAX) ? this->attackDamage = points : this->attackDamage = 0; }

void			FragTrap::attack(const std::string& target)
{
	if (hitPoints == 0)
		std::cout << "FragTrap " << this->name << " is dead and cannot attack!" << std::endl;
	else if (energyPoints == 0)
		std::cout << "FragTrap " << this->name << " has no energy and cannot attack!" << std::endl;
	else
	{
		energyPoints -= 1;
		std::cout << "FragTrap " << this->name <<  " attacks " << target << ", causing " << attackDamage << " points of damage!" 
		<< " EP: " << this->getEnergyPoints() << std::endl;
	}
}

void			FragTrap::beRepaired(unsigned int points)
{
	if (this->energyPoints == 0)
		std::cout << "FragTrap " << this->name << " has no energy!" << std::endl;
	else
	{
		hitPoints += points;
		energyPoints -= 1;
		std::cout << "FragTrap " << this->name <<  " healed " << points << " points of damage!" << " HP = " << hitPoints  << " EP = " << energyPoints << std::endl;
	}
}

void			FragTrap::takeDamage(unsigned int points)
{
	if (points >= hitPoints)
	{
		std::cout << "FragTrap " << this->name << " is dead!" << std::endl;
		hitPoints = 0;
	}
	else
	{
		hitPoints -= points;
		std::cout << "FragTrap " << this->name <<  " takes " << points << " points of damage!"
		<<  " HP: " << this->getHitPoints() << std::endl;
	}
}


void 			FragTrap::highFivesGuys(void){ std::cout << "FragTrap " << this->name << " attempts a high hive!!!" << std::endl; }


FragTrap::~FragTrap(){ std::cout << "FragTrap " << name << " Destructor" << std::endl; }
