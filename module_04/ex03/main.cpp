/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:29:20 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/14 17:59:05 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	std::cout << "****LEARNING MATERIAS****\n";
	
	
	src->learnMateria(nullptr);
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	ICharacter* me = new Character("me");
	AMateria* tmp;

	std::cout << "\n****CREATING MATERIAS && EQUIPPING \n\n";
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	
	
	std::cout << "\n****INVALID MATERIA TYPE **** \n\n";
	AMateria* tmp2;
	tmp2 = src->createMateria("iced");
		
	ICharacter* bob = new Character("bob");
	std::cout << "\n****ATTEMPT TO EQUIP ALREADY EQUPPIED MATERIA **** \n\n";
	me->equip(tmp);
	
	std::cout << "\n****ATTEMPT TO EQUIP OTHER CHARACTERS MATERIA **** \n\n";
	bob->equip(tmp);
	
	std::cout << "\n****ATTEMPT TO EQUIP MATERIA IF CHARACTER INVENTORY IS FULL**** \n\n";
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	
	std::cout << "\n****NEW CHARACTER EQUIPPING AND USING MATERIA**** \n\n";

	tmp = src->createMateria("cure");
	bob->equip(tmp);
	bob->use(0, *me);
	
	std::cout << "\n****FIRST CHARACTER USING MATERIA**** \n\n";
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	
	std::cout << "\n****UNEQUIPPING MATERIA**** \n\n";
	me->unequip(0);
	
	std::cout << "\n****ATTEMPT TO UNEQUIP WHEN SLOT IS EMPTY**** \n\n";
	me->unequip(0);
	
	std::cout << "\n****ATTEMPT TO UNEQUP WITH INVALID SLOT INDEX**** \n\n";
	me->unequip(-10);
	
	std::cout << "\n****ATTEMPT TO USE MATERIA THAT HAS BEEN UNEQUIPPED**** \n\n";
	me->use(0, *bob);
	
	
	std::cout << "\n****USING COPY CONSTRUCTOR AND OVERLOADS**** \n\n";
	
	Character *tim = new Character("tim");
	tmp = src->createMateria("ice");
	tim->equip(tmp);
	tmp = src->createMateria("cure");
	tim->equip(tmp);
	tmp = src->createMateria("cure");
	tim->equip(tmp);
	tmp = src->createMateria("ice");
	tim->equip(tmp);
		
	Character *thomas = new Character(*tim);

	thomas->use(2, *tim);
	thomas->unequip(0);
	thomas->use(0, *me);
	tim->use(0, *me);

	Character *dave = new Character("dave");

	dave->use(0, *tim);
	
	*dave = *tim;

	dave->use(2, *tim);
	dave->unequip(0);
	dave->use(0, *me);
	tim->use(0, *me);
	
	
	delete bob;
	delete me;
	delete src;
	delete tim;
	delete thomas;
	delete dave;
	return 0;
}