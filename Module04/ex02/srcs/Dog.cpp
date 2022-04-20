/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:43:31 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/20 10:43:32 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog( const Dog &src ) { *this = src; }

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog Destructor called" << std::endl;
}

Dog & Dog::operator=( const Dog &rhs)
{
	if (this == &rhs )
		return (*this);
	this->_type = rhs._type;
	this->_brain = new Brain();
	this->_brain = rhs._brain;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "looks Like a Dog sound!" << std::endl;
}
