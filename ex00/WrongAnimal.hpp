/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:57:24 by pafuente          #+#    #+#             */
/*   Updated: 2026/02/12 10:57:26 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

// IMPORTANT: Wrong implementation - demonstrates what happens WITHOUT virtual functions
// This class shows incorrect polymorphism (static binding at compile time)
class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	WrongAnimal &operator=(const WrongAnimal &other);
	~WrongAnimal(); // NO virtual destructor - potential memory leak!

	std::string getType() const;

	// NO virtual keyword - no polymorphism! Will always call WrongAnimal's version
	void makeSound() const;
};

#endif
