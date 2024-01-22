/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:26:57 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/22 15:36:55 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_
# define _BRAIN_

#include <iostream>
#include <sstream>

class Brain {
public:
	std::string ideas[100];
	Brain( void );
	Brain( const Brain& copy );
	Brain& operator=( const Brain& input );
	~Brain( void );
};

#endif
