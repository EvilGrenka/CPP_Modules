/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:39:46 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/27 17:39:47 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern( const Intern & src );
		~Intern();
		Intern & operator = ( const Intern & rhs );
		class FormNotFound: public std::exception
		{
			virtual	const char * what() const throw();
		};
		Form*	ShrubberyCreation( std::string target );
		Form*	RobotomyRequest( std::string target );
		Form*	PresidentialPardon( std::string target );
		Form*	makeForm( std::string Type, std::string target );
};

#endif
