/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:23:26 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/14 16:32:00 by tcampbel         ###   ########.fr       */
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

std::string const & Character::getName() const { return name; }

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != nullptr)
		{
			delete inventory[i];
			inventory[i] = nullptr;
		}
	}
	if (floor)
		delete floor;
}


void Character::equip(AMateria* m)
{
	if (m == nullptr)
		return ;
	if (m->getOwner() != nullptr && m->getOwner() != this)
	{
		std::cout << "Materia is already equipped by someone else!\n";
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == nullptr)
		{
			inventory[i] = m;
			m->setOwner(this);
			std::cout << name << " equipped " << m->getType() << " in slot [" << i << "]\n";
			return ;
		}
		else if (m == inventory[i])
		{
			std::cout << "You have already equipped this materia\n"; 
			return ;
		}
	}
	if (floor)
		floor->listAddNode(m);
	std::cout << "Inventory is full! Adding " << m->getType() << " materia to the floor\n";
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3 && inventory[idx] != nullptr)
	{
		if (floor)
			floor->listAddNode(inventory[idx]);
		std::cout << "Unequipped " << inventory[idx]->getType() << " materia in slot [" << idx << "]\n";
		inventory[idx]->setOwner(nullptr); 
		inventory[idx] = nullptr;
		
	}
	else
		std::cout << "Unable to unequip item! Item in slot [" << idx << "] does not exist...\n";
} 

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3 && inventory[idx] != nullptr && inventory[idx]->getOwner() == this)
		inventory[idx]->use(target);
	else
		std::cout << name << " cannot use materia\n";
}