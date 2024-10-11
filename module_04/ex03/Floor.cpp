/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 11:07:02 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/11 16:54:41 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Floor.hpp"

Floor::Floor() : head(nullptr) {}

Floor::Floor(const Floor& copy) 
{
	Node* temp = head;
	this->head = copy.head;
	while (temp)
	{
		this->head->item = temp->item;
		temp = temp->next;
	}
}

const	Floor& Floor::operator=(const Floor& other)
{
	Node* temp = head;
	this->head = other.head;
	while (temp)
	{
		this->head->item = temp->item;
		temp = temp->next;
	}
	return *this;
}


void	Floor::listAddNode(AMateria* item)
{
	if (item == nullptr)
		return ;
	Node* newNode = new Node();
	newNode->item = item;
	newNode->next = nullptr;
	if (head == nullptr)
		head = newNode;
	else
	{
		Node* temp = head;
		while (temp->next != nullptr)
			temp = temp->next;
		temp->next = newNode;
	}
}

void	Floor::listRemove()
{
	if (head == nullptr)
		return ;
	Node*	current = head;
	while (current != nullptr)
	{
		Node* prev = current;
		current = current->next;
		delete prev->item;
		delete prev;
	}
	head = nullptr;
}


Floor::~Floor() 
{
	listRemove();
}

void	Floor::listDisplay()
{
	Node* temp = head;
	int i = 0;
	if (head == nullptr)
		std::cout << "List is empty\n";
	else
	{
		while (temp->next != nullptr)
		{
			std::cout << "Item at slot [" << i++ << "]: " << temp->item->getType() << std::endl;
			temp = temp->next;
		}
	}		
}