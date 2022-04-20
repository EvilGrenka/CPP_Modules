/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:34:48 by rnoriko           #+#    #+#             */
/*   Updated: 2022/03/31 21:34:49 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		string	_Name;
		Weapon	&_Weapon;
	public:
		HumanA( string Name, Weapon &Weapon );
		~HumanA();
		void	attack();
		string	getName();
		void	setName( string Name );
};

#endif
