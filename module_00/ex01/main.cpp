/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:40:13 by tcampbel          #+#    #+#             */
/*   Updated: 2024/07/31 13:58:52 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include "PhoneBook.hpp"

int	main(int ac, char **av)
{
	std::string	input;
	PhoneBook phonebook;
	try
	{
		while (1)
		{
			if (ac == 1)
			{
				std::cout << "Please enter ADD,SEARCH or EXIT" << std::endl;
				std::getline(std::cin, input);
				if (std::cin.eof())
					throw std::runtime_error("error");	
				if (input == "ADD")
					phonebook.add();
				else if (input == "SEARCH")
					phonebook.search();
				else if (input == "EXIT")
					return (0);
				else
					std::cout << "Invalid input" << std::endl;
			}
			else 
			{
				std::cout << "Why u do this?";
				return (1);
			}
		}
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}