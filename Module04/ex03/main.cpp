/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:49:24 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/20 10:49:26 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "headers/Cure.hpp"
#include "headers/Ice.hpp"
#include "headers/MateriaSource.hpp"
#include "headers/Character.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp = nullptr;
	AMateria* first = nullptr;
	tmp = src->createMateria("fire");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	first = tmp;
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete tmp;
	me->equip(nullptr);

	ICharacter* bob = new Character("bob");
	me->use(-1, *bob);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);

	me->unequip(0);
	me->use(0, *bob);
	me->use(3, *bob);
	me->unequip(-1);
	me->equip(first);
	delete bob;
	delete me;
	delete src;

	return (0);
}
