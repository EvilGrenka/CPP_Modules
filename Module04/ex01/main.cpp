/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:25:04 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/20 10:25:14 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/Cat.hpp"
#include "headers/Dog.hpp"

int main()
{
	int arr_size = 4;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Animal* animals[arr_size];

	for (int k = 0; k < (arr_size / 2); k++)
		animals[k] = new Dog();
	for (int k = (arr_size / 2); k < arr_size; k++)
		animals[k] = new Cat();
	for ( int k = 0; k < arr_size; k++)
		delete animals[k];

	delete j;
	delete i;
}
