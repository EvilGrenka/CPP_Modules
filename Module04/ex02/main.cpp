/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:43:36 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/20 10:44:06 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/Cat.hpp"
#include "headers/Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	i->makeSound();
	j->makeSound();

	delete j;
	delete i;
}
