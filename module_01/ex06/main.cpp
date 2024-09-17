/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:15:14 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/17 16:26:14 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl_filter.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	Harl harl;

	if (ac == 2)
		harl.complain(av[1]);
}