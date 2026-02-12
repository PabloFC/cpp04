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
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;

	dog->makeSound();
	cat->makeSound();
	meta->makeSound();

	delete meta;
	delete dog;
	delete cat;

	std::cout << "\n----- Wrong polymorphism -----" << std::endl;
	const WrongAnimal* wrong = new WrongCat();

	std::cout << wrong->getType() << std::endl;
	wrong->makeSound();

	delete wrong;

	return 0;
}
