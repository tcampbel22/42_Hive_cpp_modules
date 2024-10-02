/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:33:49 by tcampbel          #+#    #+#             */
/*   Updated: 2024/10/01 16:54:45 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() { type = "WrongCat"; }
WrongCat::WrongCat(WrongCat& copy) { this->type = copy.type; }
WrongCat&	WrongCat::operator=(WrongCat& other) { this->type = other.type; return *this; }
void WrongCat::makeSound() const { std::cout << type << " says MOOOOOOOOOO!!!!" << std::endl; }
WrongCat::~WrongCat() {}