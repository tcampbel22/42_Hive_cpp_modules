/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:19:53 by tcampbel          #+#    #+#             */
/*   Updated: 2024/07/30 13:13:04 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contacts.hpp"

class PhoneBook
{
private:
	Contacts	contacts[8];
	int			index = 0;
public:
	void		search(void);
	void		add(void);
	std::string	trunc_str(std::string str, int width);
	void		print_contacts(int index);
	void		get_contact(void);
};