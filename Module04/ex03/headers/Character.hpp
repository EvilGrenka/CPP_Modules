/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:51:10 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/20 10:51:11 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
	private:
		std::string	_Name;
		AMateria**	_Inventory;
	public:
		Character();
		Character( std::string Name );
		Character( const Character &src );
		~Character();
		Character &	operator = ( const Character &rhs );
		std::string	const & getName() const;
		void		equip( AMateria* m );
		void		unequip( int idx );
		void		use( int idx, ICharacter& target );
};

#endif
