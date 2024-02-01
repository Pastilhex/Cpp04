/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:24:23 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/31 19:52:12 by ialves-m         ###   ########.fr       */
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

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("joao");

	Character ivo("ivo");

	AMateria* teste1;
	AMateria* teste2;
	AMateria* teste3;

	teste1 = src->createMateria("ice");
	me->equip(teste1);

	teste2 = src->createMateria("cure");
	me->equip(teste2);

	teste3 = src->createMateria("ice");
	me->equip(teste3);

	ivo.equip(teste2);
	me->unequip(3);

	ivo.printInventory();

	Character joao = ivo;
	joao.printInventory();

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	ivo.use(2, *bob);

	delete bob;
	delete me;
	delete src;
	delete teste1;
	delete teste2;
	delete teste3;

	return 0;
}
