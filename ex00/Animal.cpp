/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:56:30 by pafuente          #+#    #+#             */
/*   Updated: 2026/02/12 10:56:31 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

// Default constructor - initializes base animal object
Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

// Copy constructor - deep copy of animal attributes
Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = other.type;
}

// Copy assignment operator - assigns one animal to another
Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &other) // Self-assignment check
		this->type = other.type;
	return *this;
}

// Virtual destructor - ensures proper cleanup of derived classes
Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

// Getter: returns the animal type
std::string Animal::getType() const
{
	return this->type;
}

// Virtual method: generic sound, can be overridden by derived classes
void Animal::makeSound() const
{
	std::cout << "Animal makes a sound" << std::endl;
}
