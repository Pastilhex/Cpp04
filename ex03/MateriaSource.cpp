/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:24:23 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/31 19:50:38 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource () {
	for (int i = 0; i < 4; i++)
		this->materiaBook[i] = NULL;
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
	for (int i = 0; i < 4; i++)
		if (this->materiaBook[i] != NULL)
			delete this->materiaBook[i];
}

void MateriaSource::learnMateria( AMateria* material ) {
	for (int i = 0; i < 4; i++)
		if (this->materiaBook[i] == NULL)
		{
			this->materiaBook[i] = material;
			std::cout << "Learned " << this->materiaBook[i]->getType() << " in position " << i + 1 << std::endl;
			return;
		}
	delete material;
}

AMateria* MateriaSource::createMateria( std::string const & type ) {
	AMateria* tmp;
	for (int i = 0; i < 4; i++)
		if (this->materiaBook[i] != NULL)
			if (this->materiaBook[i]->getType() == type)
			{
				std::cout << "Created " << this->materiaBook[i]->getType() << " in position " << i + 1 << std::endl;
				tmp = materiaBook[i]->clone();
				return tmp;
			}
	return 0;
}
