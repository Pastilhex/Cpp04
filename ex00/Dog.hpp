/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:25:22 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/17 13:43:13 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_
# define _DOG_

#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog( void );
	Dog( const Dog& copy );
	Dog& operator=( const Dog& input );
	~Dog( void );
	void makeSound() const;
	std::string getType( void );
};

#endif
