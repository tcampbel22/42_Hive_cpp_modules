/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:57:33 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/25 17:28:46 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap ClapTrap("Tom");
	ClapTrap.attack("Debbie");
	ClapTrap.takeDamage(11);
	ClapTrap.beRepaired(20);
	ClapTrap.attack("Greg");
	
}