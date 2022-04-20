/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 10:16:56 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/17 10:37:54 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &src);
		~Fixed();
		Fixed & operator = (const Fixed &src);
		int getRowBits( void ) const;
		void setRowBits( int const row );
	
	private:
		int	_fixedPointValue;
		static const int _bits = 8;
};

#endif
