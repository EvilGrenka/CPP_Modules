/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:31:47 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/27 17:32:04 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
		static std::string const	Name;
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( const PresidentialPardonForm & src );
		~PresidentialPardonForm();
		PresidentialPardonForm & operator = ( const PresidentialPardonForm & rhs );
		class GradeTooLowException: public std::exception
		{
			virtual	const char * what() const throw();
		};
		class FormIsNotSigned: public std::exception
		{
			virtual	const char * what() const throw();
		};
		void	action() const;
		void	execute( Bureaucrat const & executor ) const;
	
	private:
		PresidentialPardonForm();
		std::string const	_target;
};

#endif
