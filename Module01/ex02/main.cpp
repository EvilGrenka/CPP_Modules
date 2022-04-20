/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:34:24 by rnoriko           #+#    #+#             */
/*   Updated: 2022/03/31 21:34:25 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using std::string;

int main()
{
	string str = "HI THIS IS BRAIN";
	string *stringPTR = &str;
	string &stringREF = str;

	std::cout << "The Address in memory of the string: \r\t\t\t\t\t\t" << &str << std::endl;
	std::cout << "The Address of the string using stringPTR: \r\t\t\t\t\t\t" << stringPTR << std::endl;
	std::cout << "The Address of the string using stringERF: \r\t\t\t\t\t\t" << &stringREF << std::endl;
	std::cout	<< "-----------------------------------------------------------------" << std::endl;
	std::cout << "Display the string using the pointer: \r\t\t\t\t\t\t" << *stringPTR << std::endl;
	std::cout << "Display the string using the reference: \r\t\t\t\t\t\t" << stringREF<< std::endl;
}
