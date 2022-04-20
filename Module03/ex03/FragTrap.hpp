/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:39:55 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/20 09:39:56 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap( std::string Name );
		FragTrap( const FragTrap &src );
		~FragTrap();
		FragTrap & operator = ( const FragTrap &rhs );
		void	highFivesGuys( void );
};



#endif
