/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:24:23 by ialves-m          #+#    #+#             */
/*   Updated: 2024/04/05 08:02:36 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		int k = 20;
		Animal *animals[k];
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		Cat basic;
		Dog advanced;
		{
			Cat tmp = basic;
			Dog snoopy(advanced);
		}

		delete j;
		delete i;

		for (int i = 0; i < k / 2; i++)
			animals[i] = new Dog();

		for (int i = k / 2; i < k; i++)
			animals[i] = new Cat();

		for (int i = 0; i < k; i++)
			delete animals[i];
	}

	return 0;
}
