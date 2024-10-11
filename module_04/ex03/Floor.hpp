/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:51:18 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/11 13:47:49 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"
#include "Character.hpp"

class AMateria;
class Character;

struct Node
{
	AMateria* item;
	Node* next;
};

class Floor
{
protected:
	Node* head;
public:
	 Floor();
	 Floor(const Floor& copy);
	 ~Floor();
	 const Floor& operator=(const Floor& other);
	 void	listAddNode(AMateria* item);
	 void	listRemove();
	 void	listDisplay();
};