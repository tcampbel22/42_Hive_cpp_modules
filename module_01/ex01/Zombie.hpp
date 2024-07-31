/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:02:25 by tcampbel          #+#    #+#             */
/*   Updated: 2024/07/31 15:00:33 by tcampbel         ###   ########.fr       */
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
	Zombie();
	void	init_name(std::string name);
	void	announce(void);	
	~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif