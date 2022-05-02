/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:24:36 by rnoriko           #+#    #+#             */
/*   Updated: 2022/04/27 17:25:27 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Form test;

		std::cout << test.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form test("test", -10, 180);

		std::cout << test.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form		contract("Contract", 1, 5);
		Bureaucrat	director("Director", 1);

		std::cout << contract;

		director.singForm(contract);
		contract.beSigned(director);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form		Project("Project Approval", 5, 10);
		Bureaucrat	worker("worker", 77);

		std::cout << Project;

		worker.singForm(Project);
		Project.beSigned(worker);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
