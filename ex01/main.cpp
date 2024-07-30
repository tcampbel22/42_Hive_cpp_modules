/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:40:13 by tcampbel          #+#    #+#             */
/*   Updated: 2024/07/30 12:53:22 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int	main(int ac, char **av)
{
	std::string	input;
	PhoneBook phonebook;
	while (1)
	{
		if (ac == 1)
		{
			std::cout << "Please enter ADD,SEARCH or EXIT" << std::endl;
			std::getline(std::cin, input);
			if (input == "ADD")
				phonebook.add();
			else if (input == "SEARCH")
				phonebook.search();
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