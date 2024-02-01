/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:24:23 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/31 18:34:06 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Ice::Ice ( void ) : AMateria ("ice") {
}

Ice::Ice ( const Ice& copy ) : AMateria (copy) {
	*this = copy;
}

Ice& Ice::operator=( const Ice& input ) {
	if (this != &input)
		*this = input;
	return *this;
}

Ice::~Ice () {
}

AMateria* Ice::clone() const {
	return new Ice;
}

void Ice::use(ICharacter & target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
