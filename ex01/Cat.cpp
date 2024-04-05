/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:40:19 by ialves-m          #+#    #+#             */
/*   Updated: 2024/04/05 08:05:12 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Default Cat Constructor called!" << std::endl;
	std::cout << "Cat now has Brain!" << std::endl;
	this->type = "Cat";
	this->CatBrain = new Brain;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	this->CatBrain = new Brain(*copy.CatBrain);
	this->type = copy.type;
}

Cat &Cat::operator=(const Cat &input)
{
	std::cout << "Cat Copy Assignment Operator Called!!!" << std::endl;
	if (this != &input)
	{
		this->CatBrain = new Brain(*input.CatBrain);
		this->type = input.type;
	}
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat destroyed!" << std::endl;
	delete this->CatBrain;
}

void Cat::makeSound() const
{
	std::cout << "The Cat meows" << std::endl;
}

std::string Cat::getType(void)
{
	return this->type;
}
