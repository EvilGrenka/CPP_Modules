/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:33:46 by rnoriko           #+#    #+#             */
/*   Updated: 2022/03/31 21:33:49 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zom;
	std::string name;
	int nbr;

	std::cout << "Enter number of Zombies in your horde (int) : ";
	std::cin >> nbr;
	std::cin.ignore();
	if (std::cin.fail())
	{
		std::cout << "Wrong input!\n";
		return (1);
	}
	std::cout << "Name of your Zombies: ";
	getline(std::cin, name);
	zom = zombieHorde(nbr, name);
	delete [] zom;
	return (0);
}
