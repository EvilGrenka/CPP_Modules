/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:27:47 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/19 16:27:49 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap()
{
	this->_name = "Nobody";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap: < " << this->_name << " > joinig The fight" << std::endl;
}

ScavTrap::ScavTrap( std::string Name ) : ClapTrap( Name )
{
	this->_name = Name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap: < " << this->_name << " > joinig The fight" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src ) { *this = src; }

ScavTrap::~ScavTrap()
{
	if (this->_hitPoints == 0)
		std::cout << "ScavTrap: < " << this->_name << " > is Dead!" << std::endl;
	else
		std::cout << "ScavTrap: < " << this->_name << " > is leaving the fight!" << std::endl;
}

ScavTrap & ScavTrap::operator = ( const ScavTrap &rhs )
{
	if (this == &rhs)
		return *this;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

void	ScavTrap::attack( std::string const & target )
{
	std::cout << "ScavTrap: < " << this->_name << " > attack " << target
		<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardgate()
{
	std::cout << "ScavTrap: < " << this->_name <<
		" > has enterred in Gate Kepper mode" << std::endl;
}
