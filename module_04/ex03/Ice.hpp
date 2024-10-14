/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:39:47 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/14 15:36:03 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice& copy);
	const Ice& operator=(const Ice& other);
	~Ice();
	std::string	const&	getType() const;
	ICharacter* 		getOwner() const override;
	void				setOwner(ICharacter* newOwner) override;
	AMateria* 			clone() const override;
	void 				use(ICharacter& target) override;
};