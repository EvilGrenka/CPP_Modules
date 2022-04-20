/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:10:37 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/20 10:11:11 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal( const WrongAnimal & src );
		~WrongAnimal();
		WrongAnimal & operator = ( const WrongAnimal & rhs );
		std::string	getType() const;
		void		makeSound() const;
	
	protected:
		std::string	_type;
};

#endif
