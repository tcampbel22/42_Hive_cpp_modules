/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:40:13 by tcampbel          #+#    #+#             */
/*   Updated: 2024/07/29 17:40:59 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int	main(int ac, char **av)
{
	std::string	input;
	PhoneBook phonebook;
	while (1)
	{
		if (ac == 1 && av[1])
		{
			std::cout << "Please enter ADD,SEARCH or EXIT" << std::endl;
			std::cin >> input;
			if (input == "ADD")
				phonebook.add();
			else if (input == "SEARCH")
				std::cout << "You typed search" << std::endl;
			else if (input == "EXIT")
				exit (0);
			else
				std::cout << "Invalid input" << std::endl;
		}
		else 
		{
			std::cout << "Why u do this?";
			exit (1);
		}
	}
}