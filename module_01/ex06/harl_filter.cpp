/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl_filter.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:15:27 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/17 16:25:32 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl_filter.hpp"
#include <iostream>

Harl::Harl(){
}

Harl::~Harl(){
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "Booooooooooo!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "Booooooooooooooooooooooooooooooooo!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "Boooooooooooooooooooooooooooooooooooooooooooo!" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "Booooooooooooooooooooooooooooooooooooooooooooooooooooooooo!" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			prog = 0;

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			prog = i + 1;
			break ;
		}
	}
	switch (prog)
	{
		case 1:
			debug();
		case 2:
			info();
		case 3:
			warning();
		case 4:
		{
			error();
			break ;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}