/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:35:16 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/22 18:00:55 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal( void ) {
	std::cout << "Default Animal Constructor called!" << std::endl;
	this->type = "Animal";
}

AAnimal::AAnimal( const AAnimal& copy ) {
	this->type = copy.type;
}

AAnimal& AAnimal::operator=( const AAnimal& input ) {
	if (this != &input )
		this->type = input.type;
	return *this;
}

AAnimal::~AAnimal( void ) {
	std::cout << "Animal destroyed!" << std::endl;
}

std::string AAnimal::getType( void ) const {
	return this->type;
}

void AAnimal::makeSound() const {
	std::cout << "Animal's make sound's" << std::endl;
}
