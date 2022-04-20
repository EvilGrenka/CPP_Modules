/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:12:43 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/20 10:12:44 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal( const WrongAnimal &src ) { *this = src; }

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal & WrongAnimal::operator=( const WrongAnimal &rhs )
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

std::string	WrongAnimal::getType() const { return (this->_type); }

void		WrongAnimal::makeSound() const
{
	std::cout << "looks like a Wrong Animal sounds!" << std::endl;
}
