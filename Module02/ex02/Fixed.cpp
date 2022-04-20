/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 10:41:40 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/17 10:45:21 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_fixedPointValue = 0;
}

Fixed::Fixed(const int number)
{
	this->_fixedPointValue = number << this->_bits;
}

Fixed::Fixed( const float fnumber)
{
	this->_fixedPointValue = (int)(roundf(fnumber * (1 << this->_bits)));
}

Fixed::Fixed(const Fixed &src)
{
	this->_fixedPointValue = src.getRowBits();
}

Fixed::~Fixed()
{
}

Fixed & Fixed::operator=(const Fixed &src)
{
	this->_fixedPointValue = src.getRowBits();
	return *this;
}

Fixed Fixed::operator+(const Fixed &src) const
{
	Fixed rtn;
	rtn.setRowBits(this->_fixedPointValue + src.getRowBits());
	return (rtn);
}

Fixed Fixed::operator-(const Fixed &src) const
{
	Fixed rtn;
	rtn.setRowBits(this->_fixedPointValue - src.getRowBits());
	return (rtn);
}

Fixed Fixed::operator*(const Fixed &src) const
{
	Fixed rtn;
	rtn.setRowBits((this->_fixedPointValue * src.getRowBits()) >> this->_bits);
	return (rtn);
}

Fixed Fixed::operator/(const Fixed &src) const
{
	Fixed rtn;
	rtn.setRowBits((this->_fixedPointValue << this->_bits) / src.getRowBits());
	return (rtn);
}


Fixed & Fixed::operator++( void )
{
	++this->_fixedPointValue;
	return (*this);
}

Fixed & Fixed::operator--( void )
{
	--this->_fixedPointValue;
	return (*this);
}

Fixed Fixed::operator++( int )
{
	Fixed rtn(*this);
	operator++();
	return (rtn);
}

Fixed Fixed::operator--( int )
{
	Fixed rtn(*this);
	operator--();
	return (rtn);
}

bool Fixed::operator>( const Fixed &src) const {return (this->_fixedPointValue > src.getRowBits());}
bool Fixed::operator<( const Fixed &src) const {return (this->_fixedPointValue < src.getRowBits());}
bool Fixed::operator>=( const Fixed &src) const {return (this->_fixedPointValue >= src.getRowBits());}
bool Fixed::operator<=( const Fixed &src) const {return (this->_fixedPointValue <= src.getRowBits());}
bool Fixed::operator==( const Fixed &src) const {return (this->_fixedPointValue == src.getRowBits());}
bool Fixed::operator!=( const Fixed &src) const {return !(this->_fixedPointValue == src.getRowBits());}

int Fixed::getRowBits( void ) const {return (this->_fixedPointValue);}
void Fixed::setRowBits( int const row) {this->_fixedPointValue = row;}


float	Fixed::toFloat() const
{
	return ((float)this->_fixedPointValue / (1 << this->_bits));
}

int Fixed::toInt() const
{
	return ((int)(this->_fixedPointValue >> this->_bits));
}

Fixed & Fixed::min(Fixed &first, Fixed &second) { return (first < second ? first : second); }
const Fixed & Fixed::min(const Fixed &first, const Fixed &second) { return (first < second ? first : second); }
Fixed & Fixed::max(Fixed &first, Fixed &second) { return (first > second ? first : second); }
const Fixed & Fixed::max(const Fixed &first, const Fixed &second) { return (first > second ? first : second); }

std::ostream &operator<<(std::ostream &op, const Fixed &a)
{
	op << a.toFloat();
	return (op);
}

