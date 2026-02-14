/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 12:49:41 by pafuente          #+#    #+#             */
/*   Updated: 2026/02/11 12:49:43 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

// Base class demonstrating proper polymorphism in C++
class Animal
{
protected:
	std::string type; // Protected: accessible from derived classes

public:
	// Orthodox Canonical Form
	Animal();
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	virtual ~Animal(); // Virtual destructor prevents memory leaks when deleting derived objects via base pointer

	// Returns the type of the animal
	std::string getType() const;

	// Virtual function enables runtime polymorphism (dynamic binding)
	virtual void makeSound() const;
};

#endif
