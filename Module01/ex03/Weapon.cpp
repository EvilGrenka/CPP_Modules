/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:36:05 by rnoriko           #+#    #+#             */
/*   Updated: 2022/03/31 21:36:06 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(string Type)
{
	this->_Type = Type;
}

Weapon::~Weapon()
{
	std::cout << "Weapon Destructor\n";
}

string const &Weapon::getType()
{
	return this->_Type;
}

void	Weapon::setType( string _type)
{
	this->_Type = _type;
}
