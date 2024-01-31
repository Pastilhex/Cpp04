/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:27:21 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/31 11:20:14 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHARACTER_
# define _CHARACTER_

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class Character : public ICharacter {
private:
	std::string name;
public:
	Character( void );
	Character( std::string name );
	Character( const Character& copy );
	Character& operator=( const Character& input );
	~Character( void );

    AMateria* inventory[4];
    AMateria* floor[4];
    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};

#endif
