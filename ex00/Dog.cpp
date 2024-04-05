/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:32:11 by ialves-m          #+#    #+#             */
/*   Updated: 2024/04/05 05:35:03 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Default Dog Constructor called!" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	this->type = copy.type;
}

Dog &Dog::operator=(const Dog &input)
{
	if (this != &input)
		this->type = input.type;
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog destroyed!" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "The Dog barks" << std::endl;
}

std::string Dog::getType(void)
{
	return this->type;
}
