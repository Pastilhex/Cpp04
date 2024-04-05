/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:25:22 by ialves-m          #+#    #+#             */
/*   Updated: 2024/04/05 07:48:17 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_
#define _DOG_

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *DogBrain;

public:
	Dog(void);
	Dog(const Dog &copy);
	Dog &operator=(const Dog &input);
	~Dog(void);

	void makeSound() const;
	std::string getType(void);
};

#endif
