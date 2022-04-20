/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:50:42 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/20 10:50:43 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Ice.hpp"
#include "../headers/ICharacter.hpp"


Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice Constructor Called" << std::endl;
}

Ice::Ice( const Ice &src ) { *this = src; }

Ice::~Ice()
{
	std::cout << "Ice Destructor Called" << std::endl;
}

Ice & Ice::operator=( const Ice & rhs )
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void	Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
