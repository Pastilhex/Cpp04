/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:32:11 by ialves-m          #+#    #+#             */
/*   Updated: 2024/04/05 07:55:07 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Default Dog Constructor called!" << std::endl;
	std::cout << "Dog now has Brain!" << std::endl;
	this->type = "Dog";
	this->DogBrain = new Brain;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	this->DogBrain = new Brain(*copy.DogBrain);
	this->type = copy.type;
}

Dog &Dog::operator=(const Dog &input)
{
	std::cout << "Dog Copy Assignment Operator Called!!!" << std::endl;
	if (this != &input)
	{
		this->DogBrain = new Brain(*input.DogBrain);
		this->type = input.type;
	}
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog destroyed!" << std::endl;
	delete this->DogBrain;
}

void Dog::makeSound() const
{
	std::cout << "The Dog barks" << std::endl;
}

std::string Dog::getType(void)
{
	return this->type;
}
