/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:06:49 by tcampbel          #+#    #+#             */
/*   Updated: 2024/08/06 11:40:46 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"
#include <iostream>

int	main(void)
{
	Harl	harl;
	

	try
	{
		harl.complain("1");
		harl.complain("2");
		harl.complain("3");
		harl.complain("4");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
