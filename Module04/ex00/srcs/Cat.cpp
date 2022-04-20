/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:12:29 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/20 10:12:30 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Cat.hpp"

Cat::Cat() { this->_type = "Cat"; }

Cat::Cat( const Cat &src ) { *this = src; }

Cat::~Cat()
{
	std::cout << "Cat Destructor" << std::endl;
}

Cat & Cat::operator=( const Cat &rhs )
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "looks like a Cat sound!" << std::endl;
}
