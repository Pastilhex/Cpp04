/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:38:13 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/22 15:41:36 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	for (int i = 0; i < 100; i++) {
		std::stringstream value;
		value << i + 1;
		std::string index = value.str();
		this->ideas[i] = "Brain expanding " + index + "%\n";
	}
	std::cout << "Brain Class Activated!!!" << std::endl;
}

Brain::Brain( const Brain& copy ) {
	*this = copy;
}

Brain& Brain::operator=( const Brain& input ) {
	if (this != &input)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = input.ideas[i];
	return *this;
}

Brain::~Brain( void ) {
	std::cout << "Brain Class Deactivated!!!" << std::endl;
}
