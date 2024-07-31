/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:02:25 by tcampbel          #+#    #+#             */
/*   Updated: 2024/07/31 13:54:07 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef	ZOMBIE_HPP	 
#define	ZOMBIE_HPP 

class Zombie
{
private:
	std::string	name;
public:
	Zombie(std::string name);
	void	announce(void);	
	~Zombie();
};

Zombie* zombieHorde(int N, std::string name);
Zombie*	newZombie(std::string name);
void	RandomChump(std::string name);

#endif