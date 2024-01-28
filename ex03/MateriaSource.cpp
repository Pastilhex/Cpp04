/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:24:23 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/26 19:00:11 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource () {
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

MateriaSource::MateriaSource ( const MateriaSource& copy ) {
	*this = copy;
}

MateriaSource& MateriaSource::operator=( const MateriaSource& input ) {
	if (this != &input)
		*this = input;
	return *this;
}

MateriaSource::~MateriaSource () {
}

void MateriaSource::learnMateria( AMateria* material ) {
	for (int i = 0; i < 4; i++)
		if (inventory[i] == NULL)
		{
			inventory[i] = material;
			std::cout << "Learned " << inventory[i]->getType() << " in position " << i + 1 << std::endl;
			break;
		}
}

AMateria* MateriaSource::createMateria( std::string const & type ) {
	AMateria* tmp;
	for (int i = 3; i >= 0; i--)
		if (inventory[i] != NULL)
			if (inventory[i]->getType() == type)
			{
				std::cout << "Created " << inventory[i]->getType() << " in position " << i + 1 << std::endl;
				tmp = inventory[i];
				return tmp;
			}
	return 0;
}
