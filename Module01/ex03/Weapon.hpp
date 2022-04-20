/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:36:14 by rnoriko           #+#    #+#             */
/*   Updated: 2022/03/31 21:36:15 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>
using std::string;

class Weapon
{
	private:
		string _Type;
	public:
		Weapon( string Type );
		~Weapon();
		string const	&getType();
		void			setType( string Type );
};

#endif
