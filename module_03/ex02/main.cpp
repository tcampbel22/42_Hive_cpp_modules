/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:57:33 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/30 15:38:06 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int	main()
{
	ClapTrap Alex("Alex");
	ScavTrap Debbie("Debbie");
	FragTrap Jake("Jake");

	std::cout << "\nDebbie HP: " << Debbie.getHitPoints() << " | EP: " << Debbie.getEnergyPoints() << "  | Attack Damage: " << Debbie.getAttackPoints() << std::endl;
	std::cout << "Alex   HP: " << Alex.getHitPoints() << "  | EP: " << Alex.getEnergyPoints() << "   | Attack Damage: " << Alex.getAttackPoints() << std::endl;
	std::cout <<"Jake   HP: " << Jake.getHitPoints() << " | EP: " << Jake.getEnergyPoints() << " | Attack Damage: " << Jake.getAttackPoints() << std::endl << std::endl;
	
	Alex.setEnergyPoints(2);
	Alex.attack("Debbie");
	Debbie.takeDamage(0);
	Debbie.takeDamage(20);
	Debbie.beRepaired(15);
	Jake.attack("Alex");
	Alex.takeDamage(30);
	Alex.beRepaired(20);
	Alex.attack("Greg");
	Debbie.attack("Jake");
	Jake.takeDamage(20);
	Debbie.setHitPoints(30);
	Debbie.guardGate();
	Jake.attack("Alex");
	Alex.takeDamage(30);
	Jake.highFivesGuys();

	
	std::cout << "\nDebbie HP: " << Debbie.getHitPoints() << "  | EP: " << Debbie.getEnergyPoints() << " | Attack Damage: " << Debbie.getAttackPoints() << std::endl;
	std::cout << "Alex   HP: " << Alex.getHitPoints() << "  | EP: " << Alex.getEnergyPoints() << "  | Attack Damage: " << Alex.getAttackPoints() << std::endl;
	std::cout << "Jake   HP: " << Jake.getHitPoints() << " | EP: " << Jake.getEnergyPoints() << " | Attack Damage: " << Jake.getAttackPoints() << std::endl << std::endl;
}