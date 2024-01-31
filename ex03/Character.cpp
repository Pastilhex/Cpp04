/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:27:21 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/31 11:30:51 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"
#include <cstring>

Character::Character() {
	this->name = "noName";
	for (int i = 0; i < 4; i++) {
		inventory[i] = NULL;
		// floor[i] = NULL;
	}
}

Character::Character( std::string whichName ) {
	this->name = whichName;
	for (int i = 0; i < 4; i++) {
		inventory[i] = NULL;
		// floor[i] = NULL;
	}
}

Character::Character( const Character& copy ) {
	std::cout << "Copy Operator" << std::endl;
	*this = copy;
}

Character& Character::operator=( const Character& input ) {
	std::cout << "Assignment Operator" << std::endl;
	if (this != &input) {
		this->name = input.name;
		std::memcpy(this->inventory, input.inventory, sizeof(input.inventory));
	}
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
		std::cout << "*Unquiped " << inventory[idx]->getType() << " in position " << idx + 1 << std::endl;
		for (int i = 0; i < 4; i++)
			if (floor[i] == NULL)
			{
				floor[i] = inventory[idx];
				std::cout << "Character just left " << floor[i]->getType() << " at position " << i + 1 << " on the floor." << std::endl;
				break;
			}
		inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (this->inventory[idx])
		this->inventory[idx]->use(target);
	else
		std::cout << "Postion " << idx + 1 << " from inventory it's empty!" << std::endl;
}
