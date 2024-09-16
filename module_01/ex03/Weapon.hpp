/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:46:52 by tcampbel          #+#    #+#             */
/*   Updated: 2024/09/11 15:15:28 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_H
#define	WEAPON_H

class Weapon
{
private:
	std::string type;
public:
	Weapon(std::string club);
	const std::string& 	getType();
	void				setType(std::string type);
};

#endif