/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:23:26 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/11 17:25:57 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Floor.hpp"

Character::Character() : name("Bob") 
{
	for (int i = 0; i < 4; i++)
		inventory[i] = nullptr;
	floor = new Floor();
}

Character::Character(std::string new_name) : name(new_name)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = nullptr;
	floor = new Floor();
}

Character::Character(const Character& copy) : name(copy.name)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != nullptr)
			inventory[i] = copy.inventory[i]->clone();
		else
			inventory[i] = nullptr;
	}
}

const Character&	Character::operator=(const Character& other)
{
	for (int i = 0; i < 4; i++)
	{
		delete inventory[i];
		inventory[i] = nullptr;
	}
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != nullptr)
			inventory[i] = other.inventory[i]->clone();
		else
			inventory[i] = nullptr;
	}
	this->name = other.name;
	return *this;
}

//delete linked list and pointers to all unequipped items
Character::~Character()
{
	if (floor)
		delete floor;
}

std::string const & Character::getName() const { return name; }

void Character::equip(AMateria* m) //Add materia to both the inventory and linked list
{
	for (int i = 0; i < 4; i++)
	{
		if (m == nullptr || m == inventory[i])
		{
			std::cout << "Cannot equip\n"; 
			return ;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == nullptr)
		{
			inventory[i] = m;
			std::cout << "Equipped " << m->getType() << " in slot [" << i << "]\n";
			return ;
		}
	}
	if (floor)
		floor->listAddNode(m);
	std::cout << "Inventory is full!\n";
}

void Character::unequip(int idx) //Remove the item from the inventory array
{
	if (idx >= 0 && idx <= 3 && inventory[idx] != nullptr)
	{
		if (floor)
			floor->listAddNode(inventory[idx]);
		inventory[idx] = nullptr;
	}
	else
		std::cout << "Unable to unequip item!\n";
} 

void Character::use(int idx, ICharacter& target) //Somehow use the derived classes use functions
{
	if (idx >= 0 && idx <= 3 && inventory[idx] != nullptr)
		inventory[idx]->use(target);
	else
		std::cout << "Materia cannot be used\n";
		
}