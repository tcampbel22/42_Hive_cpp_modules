/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:33:47 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/30 14:56:13 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
#define UINT_MAX 4294967295

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string new_name);
	FragTrap(FragTrap& copy);
	~FragTrap();
	FragTrap& operator=(FragTrap& other);
	std::string		getName();
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
	void 			highFivesGuys(void);
};