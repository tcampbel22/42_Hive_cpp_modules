/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:59:29 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/10 17:29:04 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

struct floor 
{
	AMateria* unequipped; 
	floor* next; 
};

class Character : public ICharacter
{
private:
	std::string	name;
	AMateria*	inventory[4];
	floor*		head;
	int			count = 0;
public:
	Character();
	Character(const Character& copy);
	Character(std::string new_name);
	const Character&	operator=(const Character& other);
	~Character();
	std::string const & getName() const override;
	void equip(AMateria* m) override;
	void unequip(int idx) override;
	void use(int idx, ICharacter& target) override;
};