/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:37:51 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/16 11:50:42 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){
}

void	Contact::setFirstName(std::string str)
{
	Contact::FirstName = str;
}
void	Contact::setLastName(std::string str)
{
	Contact::LastName = str;
}
void	Contact::setNickName(std::string str)
{
	Contact::NickName = str;
}
void	Contact::setPhoneNumber(std::string str)
{
	Contact::PhoneNumber = str;
}
void	Contact::setSecret(std::string str)
{
	Contact::Secret = str;
}

std::string	Contact::getFirstName()
{
	return (FirstName);
}
std::string	Contact::getLastName()
{
	return (LastName);
}
std::string	Contact::getNickName()
{
	return (NickName);
}
std::string	Contact::getPhoneNumber()
{
	return (PhoneNumber);
}
std::string	Contact::getSecret()
{
	return (Secret);
}
Contact::~Contact(){
}