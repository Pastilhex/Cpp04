/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:24:23 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/23 18:55:50 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria ( void ) {
}

AMateria::AMateria ( std::string const& type ) {

}

AMateria& AMateria::operator=(std::string const & type) {
    //if (this->type != type)
    //    this->type = type;
    return *this;
}

std::string const& AMateria::getType() const {
	return this->type;
}

AMateria::~AMateria ( void ) {
}

// void AMateria::use( ICharacter & target ) {
	
// }
