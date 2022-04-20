/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:49:56 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/20 10:49:57 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/AMateria.hpp"
#include "../headers/ICharacter.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria Constructor Called" << std::endl;
}

AMateria::AMateria( std::string const &type )
{
	this->_type = type;
	std::cout << "AMateria Constructor Called" << std::endl;
}

AMateria::AMateria( const AMateria &src ) { *this = src; }

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor Called" << std::endl;
}

AMateria & AMateria::operator=( const AMateria & rhs )
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

std::string const & AMateria::getType() const { return (this->_type); }

void	AMateria::use( ICharacter& target )
{
	if (this->_type == "ice")
		std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
