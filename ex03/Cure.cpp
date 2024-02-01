/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:24:23 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/31 18:35:54 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Cure::Cure () : AMateria ("cure") {
}

Cure::Cure ( const Cure& copy ) : AMateria (copy) {
	*this = copy;
}

Cure& Cure::operator=( const Cure& input ) {
	if (this != &input)
		*this = input;
	return *this;
}

Cure::~Cure () {
}

AMateria* Cure::clone() const {
	return new Cure;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
