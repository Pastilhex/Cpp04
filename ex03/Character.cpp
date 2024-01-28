/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:27:21 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/26 18:48:47 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"

Character::Character() {
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;	
}

Character::Character( std::string whichName ) {
	this->name = whichName;
}

Character::Character( const Character& copy ) {
	*this = copy;
}

Character& Character::operator=( const Character& input ) {
	if (this != &input)
		*this = input;
	return *this;
}

Character::~Character() {
}

std::string const& Character::getName() const {
	return this->name;
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++)
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			std::cout << "*Equiped " << inventory[i]->getType() << " in position " << i + 1 << std::endl;
			break;
		}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4 && inventory[idx] != NULL) {
		std::cout << "Unquiped " << inventory[idx]->getType() << " in position " << idx + 1 << std::endl;
		inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	inventory[idx]->use(target);
}
