/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:39:47 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/03 11:57:34 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice& copy);
	const Ice& operator=(const Ice& other);
	~Ice();
	std::string	const&	getType() const;
	virtual AMateria* clone() const override;
	virtual void use(ICharacter& target) override;
};