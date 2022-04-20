/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:12:34 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/20 10:12:35 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
}

Dog::Dog( const Dog &src ) { *this = src; }

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
}

Dog & Dog::operator=( const Dog &rhs)
{
	if (this == &rhs )
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "looks Like a Dog sound!" << std::endl;
}
