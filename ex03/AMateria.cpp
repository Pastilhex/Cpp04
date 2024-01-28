/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:24:23 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/26 16:54:44 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria ( void ) {
}

AMateria::AMateria ( std::string const& type ) {
	this->type = type;
}

AMateria::AMateria( const AMateria & copy ) {
	*this = copy;
}

AMateria& AMateria::operator=( const AMateria & input ) {
	if (this != &input)
		*this = input;
    return *this;
}

std::string const& AMateria::getType() const {
	return this->type;
}

AMateria::~AMateria ( void ) {
}
