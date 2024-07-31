/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 13:49:33 by tcampbel          #+#    #+#             */
/*   Updated: 2024/07/31 15:10:33 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	if (N <= 0)
		throw std::runtime_error("Invalid N value");
	Zombie *zombArr = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombArr[i].init_name(name);
	return (zombArr);
}