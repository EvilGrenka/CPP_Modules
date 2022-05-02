/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:51:04 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/26 08:28:49 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

class ICharacter;

#include <iostream>
#include <string>

class AMateria
{
	protected:
		std::string	_type;
		
	public:
		AMateria();
		AMateria( std::string const & type );
		AMateria( const AMateria &src );
		virtual		~AMateria();
		AMateria &	operator = ( const AMateria &rhs );
		std::string	const & getType() const;
		virtual		AMateria* clone() const = 0;
		virtual		void use( ICharacter& target );

};


#endif
