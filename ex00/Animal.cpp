/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:35:16 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/16 14:44:59 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {
	std::cout << "Default Animal Constructor called!" << std::endl;
	this->type = "Animal";
}

// Animal::Animal( std::string const aType ) {
// 	this->type = aType;
// }

Animal::~Animal( void ) {
	std::cout << "Animal destroyed!" << std::endl;
}

void Animal::makeSound() {
	std::cout << "Animal's make sound's" << std::endl;
}