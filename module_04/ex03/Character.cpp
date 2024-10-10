/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:23:26 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/10 18:17:08 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character() : name("Bob") 
{
	for (int i = 0; i < 4; i++)
		inventory[i] = nullptr;
	head->unequipped = nullptr;
	head->next = nullptr;
}

Character::Character(std::string new_name) : name(new_name)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = nullptr;
	head->unequipped = nullptr;
	head->next = nullptr;
}

Character::Character(const Character& copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != nullptr)
			inventory[i] = copy.inventory[i]->clone();
		else
			inventory[i] = nullptr;
	}
	this->count = copy.count;
	this->name = copy.name;
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
	this->count = other.count;
	this->name = other.name;
	return *this;
}

//delete linked list and pointers to all unequipped items
Character::~Character() 
{
	
} 

std::string const & Character::getName() const { return name; }

void Character::equip(AMateria* m) //Add materia to both the inventory and linked list
{
	inventory[count] = m;
	count++;
}

void Character::unequip(int idx) //Remove the item from the inventory array
{
	
} 

void Character::use(int idx, ICharacter& target) //Somehow use the derived classes use functions
{
	if (idx >= 0 && idx <= 3 && inventory[idx] != nullptr)
		inventory[idx]->use(target);
	else
		std::cout << "Materia is on the floor and cannot be used\n";
		
}