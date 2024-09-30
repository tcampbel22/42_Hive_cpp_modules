/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:57:33 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/30 14:13:50 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap Alex("Alex");
	ScavTrap Debbie("Debbie");
	ScavTrap Tom("Tom");
	ScavTrap Heidi;

	std::cout << "\nDebbie HP: " << Debbie.getHitPoints() << " | EP: " << Debbie.getEnergyPoints() << " | Attack Damage: " << Debbie.getAttackPoints() << std::endl;
	std::cout << "Tom    HP: " << Tom.getHitPoints() << " | EP: " << Tom.getEnergyPoints() << " | Attack Damage: " << Tom.getAttackPoints() << std::endl;
	std::cout << "Alex   HP: " << Alex.getHitPoints() << "  | EP: " << Alex.getEnergyPoints() << "  | Attack Damage: " << Alex.getAttackPoints() << std::endl << std::endl;
	
	Alex.setEnergyPoints(2);
	Alex.attack("Debbie");
	Debbie.takeDamage(0);
	Tom.attack("Debbie");
	Debbie.takeDamage(20);
	Debbie.beRepair(15);
	Tom.attack("Alex");
	Alex.takeDamage(11);
	Alex.beRepaired(20);
	Alex.attack("Greg");
	Debbie.attack("Tom");
	Tom.takeDamage(20);
	Debbie.attack("Tom");
	Tom.takeDamage(20);
	Debbie.attack("Tom");
	Tom.takeDamage(20);
	Tom.setHitPoints(0);
	Tom.attack("Debbie");
	Debbie.guardGate();

	
std::cout << "\nDebbie HP: " << Debbie.getHitPoints() << " | EP: " << Debbie.getEnergyPoints() << " | Attack Damage: " << Debbie.getAttackPoints() << std::endl;
std::cout << "Tom    HP: " << Tom.getHitPoints() << " | EP: " << Tom.getEnergyPoints() << " | Attack Damage: " << Tom.getAttackPoints() << std::endl;
std::cout << "Alex   HP: " << Alex.getHitPoints() << "  | EP: " << Alex.getEnergyPoints() << "  | Attack Damage: " << Alex.getAttackPoints() << std::endl << std::endl;
}