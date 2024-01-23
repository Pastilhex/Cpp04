/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:24:23 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/23 18:53:15 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CURE_
# define _CURE_

#include "AMateria.hpp"

class Cure : public AMateria {
private:
    std::string type;
public:
    Cure( void );
    Cure( const Cure& copy );
    Cure& operator=( const Cure& input );
    ~Cure( void );
};


#endif