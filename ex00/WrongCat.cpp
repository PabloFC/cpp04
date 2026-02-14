/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:57:34 by pafuente          #+#    #+#             */
/*   Updated: 2026/02/12 10:57:35 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

// Constructor: sets type to "WrongCat"
WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

// Copy constructor: calls WrongAnimal's copy constructor
WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

// Copy assignment operator
WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

// Destructor
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

// This method WON'T be called when using WrongAnimal* pointer (no polymorphism!)
void WrongCat::makeSound() const
{
	std::cout << "Wrong meow..." << std::endl;
}
