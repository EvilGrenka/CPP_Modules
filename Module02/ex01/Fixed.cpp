/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 10:23:28 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/17 10:39:12 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPointValue = 0;
}

Fixed::Fixed( const int number )
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = number << this->_bits;
}

Fixed::Fixed( const float fnumber )
{
	 std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = (int)(roundf(fnumber * (1 << this->_bits)));
}

Fixed::Fixed( const Fixed &src )
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedPointValue = src.getRowBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = src.getRowBits();
	return *this;
}

int Fixed::getRowBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void Fixed::setRowBits( int const row)
{
	this->_fixedPointValue = row;
}

float	Fixed::toFloat() const
{
	return ((float)this->_fixedPointValue / (1 << this->_bits));
}

int Fixed::toInt() const
{
	return ((int)(this->_fixedPointValue >> this->_bits));
}
std::ostream &operator<<(std::ostream &op, const Fixed &a)
{
	op << a.toFloat();
	return (op);
}
