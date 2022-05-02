/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:45:23 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/23 13:31:17 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap( std::string Name );
		FragTrap( const FragTrap &src );
		~FragTrap();
		FragTrap & operator = ( const FragTrap &rhs );
		void	attack( std::string const & target );
		void	highFivesGuys( void );
};



#endif
