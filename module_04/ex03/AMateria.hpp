/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:36:01 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/10 16:31:33 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string type;
public:
	AMateria();
	AMateria(const AMateria& copy);
	AMateria(std::string const& type);
	const AMateria& operator=(const AMateria& other);
	std::string	const&	getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;
	virtual ~AMateria() = 0;
};