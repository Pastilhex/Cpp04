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
#include "Brain.hpp"
#include "Cat.hpp"

Cat::Cat( void ) : Animal() {
	std::cout << "Default Cat Constructor called!" << std::endl;
	std::cout << "Cat now has Brain!" << std::endl;
	this->type = "Cat";
	this->CatBrain = new Brain;
}

Cat::Cat( const Cat& copy ) : Animal(copy) {
	this->type = copy.type;
	Brain* CatBrain = new Brain;
	for (int i = 0; i < 100; i++)
		CatBrain->ideas[i] = copy.CatBrain->ideas[i];
}

Cat& Cat::operator=( const Cat& input ) {
	if (this != &input )
		this->type = input.type;
	for (int i = 0; i < 100; i++)
		CatBrain->ideas[i] = input.CatBrain->ideas[i];
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
