/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:38:13 by ialves-m          #+#    #+#             */
/*   Updated: 2024/04/05 08:08:11 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Class Activated!!!" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain Copy Constructor Called!!!" << std::endl;
	std::copy(copy.ideas->begin(), copy.ideas->end(), this->ideas->begin());
}

Brain &Brain::operator=(const Brain &input)
{
	std::cout << "Brain Copy Assignment Operator Called!!!" << std::endl;
	if (this != &input)
		std::copy(input.ideas->begin(), input.ideas->end(), this->ideas->begin());
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain Class Deactivated!!!" << std::endl;
}
