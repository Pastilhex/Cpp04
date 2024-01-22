/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:24:23 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/22 16:27:51 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Cat basic;
	basic.printIdeas();
	{
		Cat tmp(basic);
		// tmp.printIdeas();
	}
	
	delete j;
	delete i;

	int k = 20;
	Animal* array[k];

	for (int i = 0; i < k / 2; i++)
		array[i] = new Dog();

	for (int i = k / 2; i < k; i++)
		array[i] = new Cat();

	for (int i = 0; i < k / 2; i++)
		delete array[i];
	for (int i = k / 2; i < k; i++)
		delete array[i];

	return 0;
}
