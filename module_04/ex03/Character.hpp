/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:59:29 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/03 12:04:28 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string	name;
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