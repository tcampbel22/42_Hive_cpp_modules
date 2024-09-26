/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:57:33 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/26 16:51:04 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int	main()
{
	ClapTrap ClapTrap("Tom");
	ScavTrap Debbie("Debbie");
	ClapTrap.attack("Debbie");
	ClapTrap.takeDamage(11);
	ClapTrap.beRepaired(20);
	ClapTrap.attack("Greg");
	Debbie.guardGate();	
}