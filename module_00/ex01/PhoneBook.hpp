/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:19:53 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/10 15:44:23 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

#ifndef	PHONEBOOK_HPP	 
#define	PHONEBOOK_HPP

class PhoneBook
{
private:
	Contact	contacts[8];
	int			index = 0;
public:
	void		search(void);
	void		add(void);
	std::string	trunc_str(std::string str, int width);
	void		print_contacts(int index);
	void		get_contact(void);
	int			check_digit(std::string str);
};

#endif