/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:29:43 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/11 13:57:10 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"


int	PhoneBook::check_digit(std::string str)
{
	int		count = 0;
	
	for (char c : str)
	{
		if (std::isdigit(c))
			count++;
	}
	if (str.length() != count)
		return (1);
	return (0);
}

void	PhoneBook::add()
{
	Contact 	new_contact;
	std::string	str;

	while (new_contact.getFirstName().empty())
	{
		std::cout << "Input first name" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			throw std::runtime_error("error");
		new_contact.setFirstName(str);
	}
	while (new_contact.getLastName().empty())
	{
		std::cout << "Input last name" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			throw std::runtime_error("error");
		new_contact.setLastName(str);
	}
	while (new_contact.getNickName().empty())
	{
		std::cout << "Input nickname" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			throw std::runtime_error("error");
		new_contact.setNickName(str);
	}
	while (new_contact.getPhoneNumber().empty())
	{
		std::cout << "Input phone number" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			throw std::runtime_error("error");
		if (!check_digit(str))
			new_contact.setPhoneNumber(str);
		else
			std::cout << "Enter a valid number" << std::endl;
	}
	while (new_contact.getSecret().empty())
	{
		std::cout << "Input your darkest secret" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			throw std::runtime_error("error");
		new_contact.setSecret(str);
	}
	if (PhoneBook::index < 8)
	{
		PhoneBook::contacts[PhoneBook::index] = new_contact;
		PhoneBook::index++;
	}
	else
	{
		PhoneBook::index = 0;
		PhoneBook::contacts[PhoneBook::index] = new_contact;
	}
}

std::string PhoneBook::trunc_str(std::string str, int width)
{
	if (str.length() > 10)
	{
		str = str.substr(0, width);
		str.back() = '.';
		return (str);
	}
	else
		return (str);
}

void	PhoneBook::print_contacts(int index)
{
	if (PhoneBook::contacts[index].getFirstName().size() != 0)
	{
		std::cout << "First Name: " << PhoneBook::contacts[index].getFirstName() << std::endl;
		std::cout << "Last Name: " << PhoneBook::contacts[index].getLastName() << std::endl;
		std::cout << "Nickname: " << PhoneBook::contacts[index].getNickName() << std::endl;
		std::cout << "Phone Number: " << PhoneBook::contacts[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << PhoneBook::contacts[index].getSecret() << std::endl;
	}
	else
	{
		std::cout << "Index " << index << " is empty" << std::endl;
		get_contact();
	}
}

void	PhoneBook::get_contact(void)
{
	std::string input;
	int			index;

	std::cout << "Enter index" << std::endl;
	std::getline(std::cin, input);
	if (std::cin.eof())
		throw std::runtime_error("error");
	if (input.length() == 1 && isdigit(input[0]))
	{
		index = std::stoi(input);
		if (index >= 0 && index <= 7)
		{
			print_contacts(index);
			return ;
		}
	}
	std::cout << "Invalid index" << std::endl;
	get_contact();
}

void	PhoneBook::search(void)
{
	int			i;

	i = -1;
	std::cout << std::setw(10) << std::left << "Index" << "|"
				<< std::setw(10) << std::left << "First Name" << "|"
				<< std::setw(10) << std::left << "Last Name" << "|"
				<< std::setw(10) << std::left << "Nickname" << std::endl;
	while (++i < 8)
	{
		std::cout << std::setw(10) << std::right << i << "|"
				<< std::setw(10) << std::right << trunc_str(PhoneBook::contacts[i].getFirstName(), 10) << "|"
				<< std::setw(10) << std::right << trunc_str(PhoneBook::contacts[i].getLastName(), 10) << "|"
				<< std::setw(10) << std::right << trunc_str(PhoneBook::contacts[i].getNickName(), 10) << std::endl;
	}
	get_contact();
}