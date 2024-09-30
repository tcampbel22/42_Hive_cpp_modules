/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:40:32 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/30 14:57:46 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
#define UINT_MAX 4294967295

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap& copy);
	~ScavTrap();
	ScavTrap& operator=(ScavTrap& other);
	std::string&	getName();
	unsigned int	getHitPoints();
	unsigned int	getEnergyPoints();
	unsigned int	getAttackPoints();
	void			setName(std::string new_name);
	void			setHitPoints(unsigned int points);
	void			setEnergyPoints(unsigned int points);
	void			setAttackPoints(unsigned int points);
	void			attack(const std::string& target);
	void			beRepaired(unsigned int points);
	void			takeDamage(unsigned int points);
	void 			guardGate();
};