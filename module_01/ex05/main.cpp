/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:17:15 by tcampbel          #+#    #+#             */
/*   Updated: 2024/08/05 17:27:34 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"
#include <iostream>

int	main(void)
{
	Harl harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
}