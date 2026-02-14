/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:56:49 by pafuente          #+#    #+#             */
/*   Updated: 2026/02/12 10:56:50 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

// Constructor: sets type to "Dog" (uses inherited protected member)
Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

// Copy constructor: calls Animal's copy constructor first
Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

// Copy assignment operator
Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

// Destructor: cleanup Dog-specific resources
Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

// Override: dog-specific implementation of makeSound()
void Dog::makeSound() const
{
	std::cout << "guauuuu" << std::endl;
}
