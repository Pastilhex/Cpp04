/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:24:23 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/26 18:33:59 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CURE_
# define _CURE_

#include "AMateria.hpp"

class Cure : public AMateria {
public:
    Cure();
    Cure( const Cure& copy );
    Cure& operator=( const Cure& input );
    ~Cure( void );

    std::string const & getType() const;
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};

#endif
