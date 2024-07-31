/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:02:25 by tcampbel          #+#    #+#             */
/*   Updated: 2024/07/31 14:02:13 by tcampbel         ###   ########.fr       */
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

#endif