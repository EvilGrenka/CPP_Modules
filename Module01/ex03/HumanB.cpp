/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:34:53 by rnoriko           #+#    #+#             */
/*   Updated: 2022/03/31 21:34:54 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB( string Name ): _Name(Name), _Weapon(NULL) {}

HumanB::~HumanB()
{
	std::cout << "HumanB Destructor\n";
}

string	HumanB::getName()
{
	return (this->_Name);
}

void	HumanB::setName( string Name )
{
	this->_Name = Name;
}

void	HumanB::attack()
{
	if (this->_Weapon != NULL)
		std::cout << this->getName() << " attacks with his " << _Weapon->getType() << std::endl;
}

void	HumanB::setWeapon(  Weapon &Weapon )
{
	this->_Weapon = &Weapon;
}
