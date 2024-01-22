/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:32:11 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/18 12:11:09 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog( void ) : Animal() {
	std::cout << "Default Dog Constructor called!" << std::endl;
	std::cout << "Dog now has Brain!" << std::endl;
	this->type = "Dog";
	this->DogBrain = new Brain;
}

Dog::Dog( const Dog& copy ) : Animal(copy) {
	this->type = copy.type;
}

Dog& Dog::operator=( const Dog& input ) {
	if (this != &input )
		this->type = input.type;
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
