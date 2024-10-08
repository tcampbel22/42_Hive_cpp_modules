/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:46:21 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/10 16:25:37 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"


class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure& copy);
	const Cure& operator=(const Cure& other);
	~Cure();
	std::string	const&	getType() const;
	virtual AMateria* clone() const override;
	virtual void use(ICharacter& target) override;
};