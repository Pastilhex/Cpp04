/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:32:11 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/22 17:59:45 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog( void ) : AAnimal() {
	std::cout << "Default Dog Constructor called!" << std::endl;
	std::cout << "Dog now has Brain!" << std::endl;
	this->type = "Dog";
	this->DogBrain = new Brain;
}

Dog::Dog( const Dog& copy ) : AAnimal(copy) {
	*this = copy;
}

Dog& Dog::operator=( const Dog& input ) {
	if (this != &input )
		this->type = input.type;
	this->DogBrain = new Brain(*input.DogBrain);
	return *this;
}

Dog::~Dog( void ) {
	std::cout << "Dog destroyed!" << std::endl;
	delete this->DogBrain;
}

void Dog::makeSound() const {
	std::cout << "The Dog barks" << std::endl;
}

std::string Dog::getType( void ) {
	return this->type;
}

void Dog::printIdeas() const
{
	for (int i = 0; i < 100; i++)
		std::cout << this->DogBrain->ideas[i];
}
