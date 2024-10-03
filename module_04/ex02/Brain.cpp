/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:51:03 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/02 16:16:50 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() { std::cout << "Brain constructor\n";}

Brain::Brain(Brain& copy) 
{ 
	std::cout << "Brain copy constructor\n";
	*this = copy; 
}

Brain&	Brain::operator=(Brain& other)
{
	std::cout << "Brain copy assignment op\n";
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor\n";
}

std::string	Brain::getIdea(unsigned int idea)
{ 
	return ideas[idea]; 
}

void		Brain::setIdea(std::string new_idea, unsigned int i)
{ 
	ideas[i] = new_idea;
}