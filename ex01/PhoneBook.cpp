/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:29:43 by tcampbel          #+#    #+#             */
/*   Updated: 2024/07/30 13:25:17 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

void	PhoneBook::add()
{
	Contacts 	new_contact;
	std::cout << "Input first name" << std::endl;
	std::getline(std::cin, new_contact.FirstName);
	std::cout << "Input last name" << std::endl;
	std::getline(std::cin, new_contact.LastName);
	std::cout << "Input nickname" << std::endl;
	std::getline(std::cin, new_contact.NickName);
	std::cout << "Input phone number" << std::endl;
	std::getline(std::cin, new_contact.PhoneNumber);
	std::cout << "Input your darkest secret" << std::endl;
	std::getline(std::cin, new_contact.Secret);
	PhoneBook::contacts[PhoneBook::index] = new_contact;
	if (PhoneBook::index < 8)
		PhoneBook::index++;
	else
		PhoneBook::index = 0;
}

std::string PhoneBook::trunc_str(std::string str, int width)
{
	if (str.length() > 9)
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
	if (PhoneBook::contacts[index].FirstName.size() != 0)
	{
		std::cout << "First Name: " << PhoneBook::contacts[index].FirstName << std::endl;
		std::cout << "Last Name: " << PhoneBook::contacts[index].LastName << std::endl;
		std::cout << "Nickname: " << PhoneBook::contacts[index].NickName << std::endl;
		std::cout << "Phone Number: " << PhoneBook::contacts[index].PhoneNumber << std::endl;
		std::cout << "Darkest Secret: " << PhoneBook::contacts[index].Secret << std::endl;
	}
	else
		std::cout << "Index " << index << " is empty" << std::endl;
}

void	PhoneBook::get_contact(void)
{
	std::string input;
	int			index;

	std::cout << "Enter index" << std::endl;
	std::getline(std::cin, input);
	if (input.length() == 1 && isdigit(input[0]))
	{
		index = stoi(input);
		if (index >= 0 && index <= 7)
			print_contacts(index);
		else
			std::cout << "Invalid index" << std::endl;
	}
	else
		std::cout << "Invalid index" << std::endl;

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
				<< std::setw(10) << std::right << trunc_str(PhoneBook::contacts[i].FirstName, 10) << "|"
				<< std::setw(10) << std::right << trunc_str(PhoneBook::contacts[i].LastName, 10) << "|"
				<< std::setw(10) << std::right << trunc_str(PhoneBook::contacts[i].NickName, 10) << std::endl;
	}
	get_contact();
}