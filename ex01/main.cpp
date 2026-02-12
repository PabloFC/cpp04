/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:57:08 by pafuente          #+#    #+#             */
/*   Updated: 2026/02/12 13:27:25 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	const int size = 4;
	Animal* animals[size];

	for (int i = 0; i < size / 2; i++)
		animals[i] = new Dog();
	for (int i = size / 2; i < size; i++)
		animals[i] = new Cat();

	std::cout << "\n--- Deleting animals ---" << std::endl;
	for (int i = 0; i < size; i++)
		delete animals[i];

	std::cout << "\n--- Deep copy test ---" << std::endl;
	Dog dog1;
	dog1.getBrain()->setIdea(0, "I want a bone");

	Dog dog2 = dog1;
	dog2.getBrain()->setIdea(0, "I want a walk");

	std::cout << "Dog1 idea: " << dog1.getBrain()->getIdea(0) << std::endl;
	std::cout << "Dog2 idea: " << dog2.getBrain()->getIdea(0) << std::endl;

	return 0;
}

