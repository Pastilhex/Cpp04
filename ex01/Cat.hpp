/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:27:08 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/22 15:50:59 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_
# define _CAT_

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain* CatBrain;
public:
	Cat( void );
	Cat( const Cat& copy );
	Cat& operator=( const Cat& input );
	~Cat( void );
	void makeSound() const;
	std::string getType( void );
	void printIdeas() const;
};

#endif
