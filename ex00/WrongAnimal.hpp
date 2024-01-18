/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:28:50 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/18 13:03:47 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGANIMAL_
# define _WRONGANIMAL_

#include <iostream>
#include <string>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal( void );
	WrongAnimal( const WrongAnimal& copy );
	WrongAnimal& operator=( const WrongAnimal& input );
	~WrongAnimal( void );
	void makeSound() const;
	std::string getType( void ) const;
};

#endif
