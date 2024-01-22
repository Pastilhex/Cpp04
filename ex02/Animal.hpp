/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:25:12 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/22 18:30:29 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_
# define _ANIMAL_

#include <iostream>
#include <string>

class AAnimal {
protected:
	std::string type;
public:
	AAnimal( void );
	AAnimal( const AAnimal& copy );
	AAnimal& operator=( const AAnimal& input );
	virtual ~AAnimal( void );
	virtual void makeSound() const = 0;
	std::string getType( void ) const;
};

#endif
