/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:11:15 by tcampbel          #+#    #+#             */
/*   Updated: 2024/07/31 16:30:20 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "string_mem = " << &string << std::endl;
	std::cout << "stringptr_mem = " << &stringPTR << std::endl;
	std::cout << "stringref_mem = " << &stringREF << std::endl;
	std::cout << "string_val = " << string << std::endl;
	std::cout << "stringptr_val = " << *stringPTR << std::endl;
	std::cout << "stringref_val = " << stringREF << std::endl;
	return (0);
}