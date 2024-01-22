/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:40:19 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/22 17:59:26 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"

Cat::Cat( void ) : AAnimal() {
	std::cout << "Default Cat Constructor called!" << std::endl;
	std::cout << "Cat now has Brain!" << std::endl;
	this->type = "Cat";
	this->CatBrain = new Brain;
}

Cat::Cat( const Cat& copy ) : AAnimal(copy) {
	*this = copy;
}

Cat& Cat::operator=( const Cat& input ) {
	if (this != &input )
		this->type = input.type;
	this->CatBrain = new Brain(*input.CatBrain);
	return *this;
}

Cat::~Cat( void ) {
	std::cout << "Cat destroyed!" << std::endl;
	delete this->CatBrain;
}

void Cat::makeSound() const {
	std::cout << "The Cat meows" << std::endl;
}

std::string Cat::getType( void ) {
	return this->type;
}

void Cat::printIdeas() const
{
	for (int i = 0; i < 100; i++)
		std::cout << this->CatBrain->ideas[i];
}
