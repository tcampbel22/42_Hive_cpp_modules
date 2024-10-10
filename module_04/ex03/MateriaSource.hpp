/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:52:56 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/10 16:23:16 by tcampbel         ###   ########.fr       */
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
	int			count = 0;
public:
	MateriaSource();
	MateriaSource(const MateriaSource& copy);
	~MateriaSource() override;
	const MateriaSource& operator=(const MateriaSource& other);
	void learnMateria(AMateria* materia) override;
	AMateria* createMateria(std::string const & type) override;
};