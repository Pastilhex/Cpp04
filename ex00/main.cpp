/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:24:23 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/18 13:21:23 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const WrongAnimal* cool = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	
	std::cout << "--------------------//--------------------" << std::endl;
	std::cout << "Animal types: \n";
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;

	std::cout << "--------------------//--------------------" << std::endl;
	std::cout << "Animal makeSound with virtual: \n";
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	std::cout << "--------------------//--------------------" << std::endl;
	std::cout << "WrongAnimal makeSound without virtual: \n";
	k->makeSound(); //will output the wrongcat sound!

	std::cout << "--------------------//--------------------" << std::endl;
	std::cout << "Base Class Animal with virtual: ";
	meta->makeSound();
	std::cout << "Base Class WrongAnimal without virtual: ";
	cool->makeSound();
	
	return 0;
}
