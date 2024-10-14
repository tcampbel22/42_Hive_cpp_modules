/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:46:21 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/14 15:36:11 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"


class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure& copy);
	const Cure& operator=(const Cure& other);
	~Cure();
	std::string	const&	getType() const;
	ICharacter* 		getOwner() const override;
	void				setOwner(ICharacter* newOwner) override;
	AMateria* 			clone() const override;
	void 				use(ICharacter& target) override;
};