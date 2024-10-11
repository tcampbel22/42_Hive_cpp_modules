/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:26:35 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/11 18:10:28 by tcampbel         ###   ########.fr       */
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
}

const MateriaSource& MateriaSource::operator=(const MateriaSource& other) 
{
	for (int i = 0; i < 4; i++)
		this->Materias_inv[i] = other.Materias_inv[i];
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia) 
{
	if (materia == nullptr)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (Materias_inv[i] == nullptr)
		{
			Materias_inv[i] = materia;
			std::cout << "Added " + materia->getType() + " materia to materia inventory\n";
			return ;
		}
	}
	std::cout << "Materia inventory is full\n";
	delete materia;
}

AMateria* MateriaSource::createMateria(std::string const & type) 
{ 
	for (int i = 0; i < 4; i++)
	{
		if (Materias_inv[i]->getType().compare("ice") == 0 && type.compare("ice") == 0)
		{
			std::cout << type + " materia created\n";
			return Materias_inv[i]->clone(); //creates temp instance of the object to call clone method
		}
		else if (Materias_inv[i]->getType() == type == 0 && type.compare("cure") == 0)
		{
			std::cout << type + " materia created\n";
			return Materias_inv[i]->clone();
		}
	}
	std::cout << "Materia type does not exist in inventory\n";
	return (0);
}

MateriaSource::~MateriaSource() 
{ 
	for (int i = 0; i < 4; i++)
	{
		if (Materias_inv[i] != nullptr)
			delete Materias_inv[i];
	}
}
