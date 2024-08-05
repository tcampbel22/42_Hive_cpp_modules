/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:21:10 by tcampbel          #+#    #+#             */
/*   Updated: 2024/08/05 17:58:14 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"
#include <iostream>

Harl::Harl()
{
	complainPtr[0] = &Harl::debug;
	complainPtr[1] = &Harl::info;
	complainPtr[2] = &Harl::warning;
	complainPtr[3] = &Harl::error;
}

Harl::~Harl()
{
}
void	Harl::debug(void)
{
	std::cout << "debug" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "info" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "warning" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "error" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*complainPtr[i])();
			break ;
		}
	}
}
