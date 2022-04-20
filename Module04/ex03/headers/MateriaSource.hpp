/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:51:36 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/20 10:51:37 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		int			_Size;
		AMateria**	_Sources;
	public:
		MateriaSource();
		MateriaSource( const MateriaSource &src );
		~MateriaSource();
		MateriaSource &	operator = ( const MateriaSource &rhs );
		void			learnMateria( AMateria*);
		AMateria*		createMateria( std::string const & type );
};

#endif
