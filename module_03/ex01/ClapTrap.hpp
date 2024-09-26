/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:11:25 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/26 16:29:57 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string 	name;
	unsigned int	hitPoints;
	unsigned int	energyPoints;
	unsigned int	attackDamage;

public:
	ClapTrap();
	ClapTrap(std::string new_name);
	ClapTrap(const ClapTrap& copy);
	~ClapTrap();
	ClapTrap&	operator=(const ClapTrap& other);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif