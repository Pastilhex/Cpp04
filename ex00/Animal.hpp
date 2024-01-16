/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:25:12 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/16 14:44:01 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_
# define _ANIMAL_

#include <iostream>
#include <string>

class Animal {
protected:
	std::string type;
public:
	Animal( void );
	// Animal( std::string const aType );
	void makeSound();
	~Animal( void );
};

#endif
