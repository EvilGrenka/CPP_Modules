/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:50:50 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/20 10:50:51 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Cure.hpp"
#include "../headers/ICharacter.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Cure Constructor Called" << std::endl;
}

Cure::Cure( const Cure &src ) { *this = src; }

Cure::~Cure()
{
	std::cout << "Cure Destructor Called" << std::endl;
}

Cure & Cure::operator=( const Cure & rhs )
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void	Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
