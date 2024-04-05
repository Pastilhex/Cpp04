/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:26:57 by ialves-m          #+#    #+#             */
/*   Updated: 2024/04/05 07:27:26 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_
#define _BRAIN_

#include <iostream>
#include <sstream>

class Brain
{
private:
	std::string ideas[100];

public:
	Brain(void);
	Brain(const Brain &copy);
	Brain &operator=(const Brain &input);
	~Brain(void);
};

#endif
