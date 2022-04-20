/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 11:18:28 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/17 11:19:04 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(POINT_HPP)
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(Fixed const &x, Fixed const &y);

		Point(Point const &other);

		Point &operator=(Point const &other);
		bool operator==(Point const &other) const;

		Fixed const &getX() const;
		Fixed const &getY() const;

		~Point();
	
	private:
		Fixed const x;
		Fixed const y;
};

#endif
