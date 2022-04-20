/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:33:29 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/17 09:57:18 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructor Called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "The Zombie " << this->_Name << " Has Destructor" << std::endl;
}

std::string	Zombie::getname()
{
	return (this->_Name);
}

void	Zombie::setname(std::string Name)
{
	this->_Name = Name;
}

void	Zombie::announce( void )
{
	std::cout << this->_Name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
