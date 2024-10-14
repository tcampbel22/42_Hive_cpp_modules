/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:36:01 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/14 15:37:10 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"
#include "Floor.hpp"

class ICharacter;
class Floor;

class AMateria
{
protected:
	std::string type;
	ICharacter*	owner;
public:
	AMateria();
	AMateria(const AMateria& copy);
	AMateria(std::string const& type);
	const AMateria& 	operator=(const AMateria& other);
	std::string	const&	getType() const;
	virtual ICharacter*	getOwner() const = 0;
	virtual	void		setOwner(ICharacter* newOwner) = 0;
	virtual AMateria* 	clone() const = 0;
	virtual void 		use(ICharacter& target) = 0;
	virtual ~AMateria() = 0;
};