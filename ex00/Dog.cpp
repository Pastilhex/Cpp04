/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:32:11 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/16 14:46:37 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Default Dog Constructor called!" << std::endl;
	this->type = "Dog";
}

// Dog::Dog( std::string const aType ) : Animal() {
// 	this->type = "dog";
// }

void Dog::makeSound() {
	std::cout << "The Dog barks" << std::endl;
}

Dog::~Dog( void ) {
	std::cout << "Dog destroyed!" << std::endl;
}
