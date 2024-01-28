/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:24:23 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/26 12:05:55 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MATSOURCE_
# define _MATSOURCE_

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
	AMateria* inventory[4];
	MateriaSource();
	MateriaSource( const MateriaSource& copy );
	MateriaSource& operator=(const MateriaSource& input);
	virtual ~MateriaSource();
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};

#endif
