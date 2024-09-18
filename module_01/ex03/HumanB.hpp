/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:54:56 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/18 15:42:43 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANB_H
#define HUMANB_H

class HumanB
{
private:
	Weapon 		*WeaponB;
	std::string	name;
public:
	HumanB();
	HumanB(std::string name);
	void	setWeapon(Weapon &club);
	void 	attack();
	~HumanB();
};

#endif