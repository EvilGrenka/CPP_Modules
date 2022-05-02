/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:37:31 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/28 16:37:33 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

struct Data
{
	int		i1;
	int		i2;
	char	c;
	bool	b;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data data;
	Data *ptr;
	uintptr_t raw;

	data.i1 = 7;
	data.i2 = 77;
	data.c = 'M';
	data.b = true;

	std::cout << data.i1 << std::endl;
	std::cout << data.i2 << std::endl;
	std::cout << data.c << std::endl;
	std::cout << data.b << std::endl;
	std::cout << "-----------------------" << std::endl;
	raw = serialize(&data);
	ptr = deserialize(raw);
	std::cout << ptr->i1 << std::endl;
	std::cout << ptr->i2 << std::endl;
	std::cout << ptr->c << std::endl;
	std::cout << ptr->b << std::endl;


	return (0);
}
