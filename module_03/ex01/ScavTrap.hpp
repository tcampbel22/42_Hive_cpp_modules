/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:40:32 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/26 16:43:31 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : protected ClapTrap
{
protected:
	std::string	new_name;
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap& copy);
	~ScavTrap();
	ScavTrap& operator=(ScavTrap& other);
	void guardGate();
};