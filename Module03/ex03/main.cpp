/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:40:02 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/20 09:40:03 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


int main( void )
{
	DiamondTrap first("first");
	DiamondTrap second("second");

	first.attack("second");
	second.takeDamage(30);
	second.attack("first");
	first.takeDamage(30);
	first.whoAmI();
	second.whoAmI();
	return (0);
}
