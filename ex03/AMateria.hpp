/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:24:23 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/23 18:55:43 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AMATERIA_
# define _AMATERIA_

#include <iostream>

class ICharacter;

class AMateria {
protected:
    std::string type;
public:
    AMateria( void );
    AMateria(std::string const & type);
    AMateria& operator=(std::string const & type);
    ~AMateria( void );
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) = 0;
};

#endif