/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:56:19 by pafuente          #+#    #+#             */
/*   Updated: 2026/02/12 10:56:23 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

// Constructor: sets type to "Cat" (uses inherited protected member)
Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

// Copy constructor: calls Animal's copy constructor first
Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

// Copy assignment operator
Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

// Destructor: cleanup Cat-specific resources
Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

// Override: cat-specific implementation of makeSound()
void Cat::makeSound() const
{
	std::cout << "miauuuu" << std::endl;
}
