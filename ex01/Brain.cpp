/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:38:13 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/18 13:51:24 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain Class Activated!!!" << std::endl;
}

Brain::Brain( const Brain& copy ) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
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
