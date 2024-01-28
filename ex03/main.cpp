/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:24:23 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/26 10:57:19 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice()); //Pos 1
	src->learnMateria(new Cure()); //Pos 2
	src->learnMateria(new Ice()); //Pos 3
	src->learnMateria(new Cure()); //Pos 4
	src->learnMateria(new Cure()); //Pos 5

	ICharacter* me = new Character("me");
	ICharacter* ivo = me;

	AMateria* tmp;
	AMateria* teste1 = Ice().clone();
	AMateria* teste2 = teste1;

	std::cout << "Clone Type: " << teste1->getType() << std::endl;
	std::cout << "Clone Type: " << teste2->getType() << std::endl;

	tmp = src->createMateria("ice");
	me->equip(tmp); //Pos 1
	tmp = src->createMateria("cure");
	me->equip(tmp); //Pos 2
	tmp = src->createMateria("ice");
	me->equip(tmp); //Pos 3
	tmp = src->createMateria("cure");
	me->equip(tmp); //Pos 4
	tmp = src->createMateria("ice");
	me->equip(tmp); //Pos 5

	ivo->equip(tmp);

	me->unequip(3);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	ivo->use(2, *bob);

	delete bob;
	delete me;
	delete ivo;
	delete src;

	return 0;
}
