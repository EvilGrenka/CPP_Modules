/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomCham.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:33:22 by rnoriko           #+#    #+#             */
/*   Updated: 2022/03/31 21:33:24 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie *zom;

	zom = newZombie(name);
	zom->announce();
	delete zom;
}
