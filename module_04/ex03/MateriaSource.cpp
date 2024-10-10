/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:26:35 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/10 16:43:03 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


MateriaSource::MateriaSource() 
{
	for (int i = 0; i < 4; i++)
		Materias_inv[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource& copy) 
{ 
	for (int i = 0; i < 4; i++)
		this->Materias_inv[i] = copy.Materias_inv[i];
	this->count = copy.count;
}

const MateriaSource& MateriaSource::operator=(const MateriaSource& other) 
{
	for (int i = 0; i < 4; i++)
		this->Materias_inv[i] = other.Materias_inv[i];
	this->count = other.count;
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia) 
{
	if (materia == nullptr)
		return ;
	if (count > 3)
	{
		std::cout << "Materia inventory is full\n";
		delete materia;
		return ;
	}
	Materias_inv[count] = materia;
	count++;
	std::cout << "Added " + materia->getType() + " materia to inventory\n";
}

AMateria* MateriaSource::createMateria(std::string const & type) 
{ 
	if (type.compare("ice") == 0)
		return Ice().clone();
	else if (type.compare("cure") == 0)
		return Cure().clone();
	std::cout << type + " materia created\n";
	return (nullptr);
}

MateriaSource::~MateriaSource() 
{ 
	for (int i = 0; i < count; i++)
		delete Materias_inv[i];
}
