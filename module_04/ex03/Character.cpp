/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:23:26 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/04 17:27:32 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){}
Character::Character(std::string new_name) {}
Character::Character(const Character& copy) {}
const Character&	Character::operator=(const Character& other) {}
Character::~Character(){}

std::string const & Character::getName() const {}
void Character::equip(AMateria* m) {}
void Character::unequip(int idx) {}
void Character::use(int idx, ICharacter& target) {}