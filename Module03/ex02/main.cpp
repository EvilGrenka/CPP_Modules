/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:44:47 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/19 16:44:51 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int main( void )
{
	ClapTrap clapper("clapper");
	ScavTrap scaver("scaver");
	FragTrap fragger("fragger");

	scaver.guardgate();
	fragger.highFivesGuys();
	clapper.attack("fragger");
	fragger.takeDamage(20);
	fragger.attack("clapper");
	clapper.takeDamage(20);
	return (0);
}
