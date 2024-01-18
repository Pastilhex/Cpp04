/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:40:19 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/18 12:10:50 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat( void ) : Animal() {
	std::cout << "Default Cat Constructor called!" << std::endl;
	this->type = "Cat";
}

Cat::Cat( const Cat& copy ) : Animal(copy) {
	this->type = copy.type;
}

Cat& Cat::operator=( const Cat& input ) {
	if (this != &input )
		this->type = input.type;
	return *this;
}

Cat::~Cat( void ) {
	std::cout << "Cat destroyed!" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "The Cat meows" << std::endl;
}

std::string Cat::getType( void ) {
	return this->type;
}
