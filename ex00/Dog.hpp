/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:25:22 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/16 14:46:09 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_
# define _DOG_

#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog( void );
	// Dog( std::string const aType );
	void makeSound();
	~Dog( void );
};

#endif
