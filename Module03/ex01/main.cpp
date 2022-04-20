/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:25:53 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/19 16:25:54 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main( void )
{
	ClapTrap clapper("clapper");
	ScavTrap scaver("scaver");

	scaver.guardgate();
	clapper.attack("scaver");
	scaver.takeDamage(20);
	scaver.attack("clapper");
	clapper.takeDamage(20);
	return (0);
}
