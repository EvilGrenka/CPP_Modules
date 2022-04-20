/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 10:40:36 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/17 10:44:09 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed( const int number );
		Fixed( const float fnumber );
		Fixed( const Fixed &src );
		~Fixed();
		
		Fixed & operator = ( const Fixed &src );
		Fixed operator + ( const Fixed &src ) const;
		Fixed operator - ( const Fixed &src ) const;
		Fixed operator * ( const Fixed &src ) const;
		Fixed operator / ( const Fixed &src ) const;

		Fixed & operator ++ ( void );
		Fixed & operator -- ( void );
		Fixed operator ++ ( int );
		Fixed operator -- ( int );

		bool operator > ( const Fixed &src ) const;
		bool operator < ( const Fixed &src ) const;
		bool operator >= ( const Fixed &src ) const;
		bool operator <= ( const Fixed &src ) const;
		bool operator == ( const Fixed &src ) const;
		bool operator != ( const Fixed &src ) const;

		static Fixed &min ( Fixed & first, Fixed &second);
		const static Fixed &min ( const Fixed & first, const Fixed &second);
		static Fixed &max ( Fixed & first, Fixed &second);
		const static Fixed &max ( const Fixed & first, const Fixed &second);

		int getRowBits( void ) const;
		void setRowBits( int const row ) ;
		float toFloat( void ) const;
		int toInt( void ) const;

	private:
		int _fixedPointValue;
		static const int _bits = 8;
};

std::ostream &operator<<(std::ostream &op, const Fixed &a);

#endif
