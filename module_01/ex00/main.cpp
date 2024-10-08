/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:46:44 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/18 11:42:33 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"


Zombie*	newZombie(std::string name)
{
	Zombie *zombptr = new Zombie(name);
	return (zombptr);
}
void	RandomChump(std::string name)
{
	Zombie New(name);
	New.announce();
}

int	main(void)
{
	Zombie *newZom;
	RandomChump("James");
	newZom = newZombie("Elias");
	newZom->announce();
	delete newZom;
}
