/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:20:19 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/10 15:43:00 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef	CONTACT_HPP	 
#define	CONTACT_HPP

class Contact
{
private:
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	PhoneNumber;
	std::string	Secret;
public:
	Contact();
	void	setFirstName(std::string str);
	void	setLastName(std::string str);
	void	setNickName(std::string str);
	void	setPhoneNumber(std::string str);
	void	setSecret(std::string str);
	
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickName();
	std::string	getPhoneNumber();
	std::string	getSecret();
	
	~Contact();
};

#endif