/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:49:32 by ialves-m          #+#    #+#             */
/*   Updated: 2024/04/05 06:21:12 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "Default WrongCat Constructor called!" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	this->type = copy.type;
}

WrongCat &WrongCat::operator=(const WrongCat &input)
{
	if (this != &input)
		this->type = input.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed!" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "The WrongCat meows" << std::endl;
}

std::string WrongCat::getType(void)
{
	return this->type;
}
