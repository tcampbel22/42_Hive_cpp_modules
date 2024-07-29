/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:29:43 by tcampbel          #+#    #+#             */
/*   Updated: 2024/07/29 17:37:25 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

void	PhoneBook::add(void)
{
	Contacts new_contact;
	std::cout << "Input first name" << std::endl;
	std::cin >> new_contact.FirstName;
	std::cout << "Input last name" << std::endl;
	std::cin >> new_contact.LastName;
	std::cout << "Input nickname" << std::endl;
	std::cin >> new_contact.NickName;
	std::cout << "Input phone number" << std::endl;
	std::cin >> new_contact.PhoneNumber;
	std::cout << "Input your darkest secret" << std::endl;
	std::cin >> new_contact.Secret;
}