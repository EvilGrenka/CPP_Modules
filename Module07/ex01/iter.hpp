/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 20:48:24 by rnoriko           #+#    #+#             */
/*   Updated: 2022/05/01 20:48:25 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void	iter(T *arr, int size, void (*f)(T const &val))
{
	for (int i = 0; i < size; i++)
		(*f)(arr[i]);
}

template <typename T>
void print(T const &val)
{
	std::cout << val << std::endl;
}

#endif
