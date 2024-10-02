/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:40:42 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/02 14:09:05 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(Brain& copy);
	Brain&	operator=(Brain& other);
	~Brain();
	std::string	getIdea(unsigned int idea);
	void		setIdea(std::string idea, unsigned int);
};