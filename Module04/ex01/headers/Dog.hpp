/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:24:09 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/20 10:24:10 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Dog: public Animal
{
	public:
		Dog();
		Dog( const Dog &src );
		~Dog();
		Dog & operator = ( const Dog &rhs );
		void makeSound() const;
	
	private:
		Brain*	_brain;
};

#endif
