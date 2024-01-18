/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:35:16 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/18 11:35:59 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {
	std::cout << "Default Animal Constructor called!" << std::endl;
	this->type = "Animal";
}

Animal::Animal( const Animal& copy ) {
	this->type = copy.type;
}

Animal& Animal::operator=( const Animal& input ) {
	if (this != &input )
		this->type = input.type;
	return *this;
}

Animal::~Animal( void ) {
	std::cout << "Animal destroyed!" << std::endl;
}

std::string Animal::getType( void ) const {
	return this->type;
}

void Animal::makeSound() const {
	std::cout << "Animal's make sound's" << std::endl;
}
