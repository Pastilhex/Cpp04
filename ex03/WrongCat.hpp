/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:27:04 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/18 12:07:04 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGCAT_
# define _WRONGCAT_

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat( void );
	~WrongCat( void );
	WrongCat( const WrongCat& copy );
	WrongCat& operator=( const WrongCat& input );
	void makeSound() const;
	std::string getType();
};

#endif
