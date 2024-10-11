/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:52:56 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/11 18:10:44 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
protected:
	AMateria*	Materias_inv[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource& copy);
	~MateriaSource() override;
	const MateriaSource& operator=(const MateriaSource& other);
	void learnMateria(AMateria* materia) override;
	AMateria* createMateria(std::string const & type) override;
};