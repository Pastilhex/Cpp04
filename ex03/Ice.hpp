/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:24:23 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/26 18:19:33 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ICE_
# define _ICE_

#include "AMateria.hpp"

class Ice : public AMateria{
public:
    Ice();
    Ice( const Ice& copy );
    Ice& operator=( const Ice& input );
    ~Ice();

    std::string const & getType() const; 	// Returns the materia type
    virtual AMateria* clone() const; 		// Clone
    virtual void use(ICharacter& target);
};


#endif