/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:34:12 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/17 09:57:47 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie * zom;

	zom = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zom[i].setname(name);
		zom[i].announce();
	}
	return (zom);
}
