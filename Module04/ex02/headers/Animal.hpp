/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:30:33 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/20 10:31:04 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal();
		Animal( const Animal & src );
		virtual ~Animal();
		Animal & operator = ( const Animal & rhs );
		std::string	getType() const;
		virtual void		makeSound() const = 0;
	
	protected:
		std::string	_type;
};

#endif
