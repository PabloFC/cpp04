/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:57:08 by pafuente          #+#    #+#             */
/*   Updated: 2026/02/12 10:57:09 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "----- Correct polymorphism -----" << std::endl;

	// Using base class pointers to store derived objects
	const Animal *meta = new Animal();
	const Animal *dog = new Dog(); // Dog object, Animal pointer
	const Animal *cat = new Cat(); // Cat object, Animal pointer

	// getType() works correctly (returns "Dog" and "Cat")
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;

	// makeSound() calls the correct derived version (RUNTIME polymorphism)
	dog->makeSound();  // Outputs: "guauuuu" (Dog's version)
	cat->makeSound();  // Outputs: "miauuuu" (Cat's version)
	meta->makeSound(); // Outputs: "Animal makes a sound" (Animal's version)

	// Virtual destructor ensures proper cleanup of derived classes
	delete meta;
	delete dog;
	delete cat;

	std::cout << "\n----- Wrong polymorphism -----" << std::endl;

	// WrongCat object stored in WrongAnimal pointer
	const WrongAnimal *wrong = new WrongCat();

	std::cout << wrong->getType() << std::endl; // Returns "WrongCat" (works)
	wrong->makeSound();							// PROBLEM: Calls WrongAnimal's version, not WrongCat's!

	delete wrong; // Only calls ~WrongAnimal(), not ~WrongCat() (potential leak!)

	return 0;
}
