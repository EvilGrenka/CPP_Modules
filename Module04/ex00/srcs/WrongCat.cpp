/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:12:51 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/20 10:12:52 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/WrongCat.hpp"

WrongCat::WrongCat() { this->_type = "WrongCat"; }

WrongCat::WrongCat( const WrongCat &src ) { *this = src; }

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor" << std::endl;
}

WrongCat & WrongCat::operator=( const WrongCat &rhs )
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "looks like a Wrong Cat sound!" << std::endl;
}
