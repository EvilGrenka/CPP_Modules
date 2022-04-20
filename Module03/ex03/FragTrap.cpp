/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:39:48 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/20 09:45:34 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_hitPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap: < " << this->_name << " > joinig The fight" << std::endl;
}

FragTrap::FragTrap( std::string Name ) : ClapTrap( Name )
{
	this->_hitPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap: < " << this->_name << " > joinig The fight" << std::endl;
}

FragTrap::FragTrap( const FragTrap & src ) { *this = src; }

FragTrap::~FragTrap()
{
	if (this->_hitPoints == 0)
		std::cout << "FragTrap: < " << this->_name << " > is Dead!" << std::endl;
	else
		std::cout << "FragTrap: < " << this->_name << " > is leaving the fight!" << std::endl;
}

FragTrap & FragTrap::operator = ( const FragTrap &rhs )
{
	if (this == &rhs)
		return *this;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap: < " << this->_name << ">  requested for a Hight Fives" << std::endl;
}
