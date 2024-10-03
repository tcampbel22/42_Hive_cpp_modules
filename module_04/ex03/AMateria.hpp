/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:36:01 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/03 11:44:30 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string type;
public:
	AMateria(std::string const& type);
	std::string	const&	getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};