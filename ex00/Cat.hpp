/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:27:08 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/16 14:47:47 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_
# define _CAT_

#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat( void );
	// Cat( std::string const aType );
	void makeSound();	
	~Cat( void );
};

#endif
