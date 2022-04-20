/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:32:51 by rnoriko           #+#    #+#             */
/*   Updated: 2022/03/31 21:32:53 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main()
{
	int nbr;
	int i;

	std::cout << "Enter number of Zombie to Create (int) : ";
	std::cin >> nbr;
	std::cin.ignore();

	if (std::cin.fail())
		std::cout << "Wrong input!\n";
	else
	{
		i = 0;
		std::string name[nbr];
		while (i < nbr)
		{
			std::cout << "Name of Zombie number " << i + 1 << "/" << nbr << ": ";
			getline(std::cin, name[i]);
			i++;
		}
		std::cout << "-----------------------------------------------------------" << std::endl;
		i = 0;
		randomChump(name[rand() % nbr]);
	}
	return (0);
}
