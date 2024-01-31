/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:24:23 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/31 11:08:33 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource () {
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
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
	delete this->inventory[0];
	delete this->inventory[1];
	delete this->inventory[2];
	delete this->inventory[3];
}

void MateriaSource::learnMateria( AMateria* material ) {
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = material;
			std::cout << "Learned " << this->inventory[i]->getType() << " in position " << i + 1 << std::endl;
			return;
		}
	delete material;
}

AMateria* MateriaSource::createMateria( std::string const & type ) {
	AMateria* tmp;
	for (int i = 3; i >= 0; i--)
		if (this->inventory[i] != NULL)
			if (this->inventory[i]->getType() == type)
			{
				std::cout << "Created " << this->inventory[i]->getType() << " in position " << i + 1 << std::endl;
				tmp = this->inventory[i];
				return tmp;
			}
	return 0;
}
