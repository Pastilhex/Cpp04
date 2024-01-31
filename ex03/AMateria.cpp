/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:24:23 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/30 12:34:16 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <cstring>

AMateria::AMateria ( void ) {
}

AMateria::AMateria ( std::string const& type ) {
	this->type = type;
}

AMateria::AMateria( const AMateria & copy ) {
	this->type = copy.getType();
}

AMateria& AMateria::operator=( const AMateria & input ) {
	if (this != &input)
		this->type = input.getType();
    return *this;
}

std::string const& AMateria::getType() const {
	return this->type;
}

AMateria::~AMateria ( void ) {
}
