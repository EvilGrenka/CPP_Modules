/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:43:13 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/20 10:43:13 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Animal.hpp"

Animal::Animal()
{
	this->_type = "Animal";
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal( const Animal &src ) { *this = src; }

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=( const Animal &rhs )
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

std::string	Animal::getType() const { return (this->_type); }
