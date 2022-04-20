/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:35:44 by rnoriko           #+#    #+#             */
/*   Updated: 2022/03/31 21:35:45 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		string	_Name;
		Weapon	*_Weapon;
	public:
		HumanB( string Name );
		~HumanB();
		void	attack();
		string	getName();
		void	setName( string Name );
		void	setWeapon( Weapon &Weapon );
};

#endif
