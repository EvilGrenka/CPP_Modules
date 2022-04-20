/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:36:55 by rnoriko           #+#    #+#             */
/*   Updated: 2022/03/31 21:36:56 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen karen;
	if (ac != 1)
		karen.complain(av[1]);
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
