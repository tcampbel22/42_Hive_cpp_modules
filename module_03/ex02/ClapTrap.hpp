/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:11:25 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/30 14:09:48 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#define UINT_MAX 4294967295
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
	ClapTrap&	operator=(ClapTrap& other);
	unsigned int	getHitPoints();
	unsigned int	getEnergyPoints();
	unsigned int	getAttackPoints();
	void			setHitPoints(unsigned int points);
	void			setEnergyPoints(unsigned int points);
	void			setAttackPoints(unsigned int points);
	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
};

#endif