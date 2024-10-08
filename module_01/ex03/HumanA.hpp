/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:52:56 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/18 15:52:39 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANA_H
#define HUMANA_H

class HumanA
{
private:
	Weapon& 	WeaponA;
	std::string	name;
public:
	HumanA(std::string new_name, Weapon& weapon);
	void attack();
	~HumanA();
};
#endif