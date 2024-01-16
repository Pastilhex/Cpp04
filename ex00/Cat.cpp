/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:40:19 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/16 14:47:31 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Default Cat Constructor called!" << std::endl;
	this->type = "Cat";
}

// Cat::Cat( std::string const aType ) : Animal() {
// 	this->type = "Cat";
// }

void Cat::makeSound() {
	std::cout << "The Cat meows" << std::endl;
}

Cat::~Cat( void ) {
	std::cout << "Cat destroyed!" << std::endl;
}
