/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:19:29 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/23 12:25:15 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main( void )
{
	ClapTrap rnoriko("rnoriko");
	ClapTrap nbeedle("nbeedle");

	nbeedle.beRepaired(10);
	rnoriko.attack("nbeedle");
	nbeedle.takeDamage(0);
	rnoriko.beRepaired(10);
	nbeedle.attack("rnoriko");
	rnoriko.takeDamage(0);
	return (0);
}
