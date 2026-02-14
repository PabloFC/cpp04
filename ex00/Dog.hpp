/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:56:59 by pafuente          #+#    #+#             */
/*   Updated: 2026/02/12 10:57:02 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

// Dog class: inherits from Animal (public inheritance)
class Dog : public Animal
{
public:
	// Orthodox Canonical Form
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	virtual ~Dog(); // Virtual destructor inherited from Animal

	// Overrides Animal::makeSound() - dog-specific sound
	virtual void makeSound() const;
};

#endif
