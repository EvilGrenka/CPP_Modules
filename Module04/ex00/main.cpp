/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:11:36 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/20 10:44:47 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/Cat.hpp"
#include "headers/Dog.hpp"
#include "headers/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* Wrongmeta = new WrongCat();
	// const WrongCat* Wrongi = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << Wrongmeta->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	Wrongmeta->makeSound();
	// Wrongi->makeSound();
	delete j;
	delete i;
	delete meta;
	delete Wrongmeta;
}
