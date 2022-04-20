/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:34:42 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/17 09:58:05 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( string Name, Weapon &Weapon ): _Name(Name), _Weapon(Weapon){}

HumanA::~HumanA()
{
	std::cout << "HumanA Destructor\n";
}

string	HumanA::getName()
{
	return (this->_Name);
}

void	HumanA::setName( string Name )
{
	this->_Name = Name;
}

void	HumanA::attack()
{
	std::cout << this->getName() << " attacks with his " << _Weapon.getType() << std::endl;
}
