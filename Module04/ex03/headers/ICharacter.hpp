/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:51:26 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/20 10:51:27 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"
#include <string>

class ICharacter
{
	public:
		virtual	~ICharacter() {};
		virtual	std::string const & getName() const = 0;
		virtual	void equip( AMateria* m ) = 0;
		virtual	void unequip( int idx ) = 0;
		virtual	void use( int idx, ICharacter& target ) = 0;
};

#endif
