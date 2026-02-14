/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:56:42 by pafuente          #+#    #+#             */
/*   Updated: 2026/02/12 10:56:43 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

// Cat class: inherits from Animal (public inheritance)
class Cat : public Animal
{
public:
    // Orthodox Canonical Form
    Cat();
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);
    virtual ~Cat(); // Virtual destructor inherited from Animal

    // Overrides Animal::makeSound() - cat-specific sound
    virtual void makeSound() const;
};

#endif
