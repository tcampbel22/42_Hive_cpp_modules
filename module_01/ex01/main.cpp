/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:46:44 by tcampbel          #+#    #+#             */
/*   Updated: 2024/07/31 15:15:21 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	try
	{
		int	N = 5;
		Zombie *horde;
		horde = zombieHorde(N, "Fred");
		for (int i = 0; i < N; i++)
			horde->announce();
		delete[] horde;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
