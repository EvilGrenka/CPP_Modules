/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:31:06 by rnoriko           #+#    #+#             */
/*   Updated: 2022/03/31 18:10:55 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

static std::string	resize_add_dot(std::string content)
{
	if (content.length() > 10)
	{
		content.erase(content.begin() + 9, content.end());
		content.append(".");
	}
	return (content);
}

void    PhoneBook::_add()
{
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
	
	while(true)
	{
		std::cout << BLACKBOLD << "First Name: " << RESET;
		getline(std::cin, first_name);
		std::cout << BLACKBOLD << "Last Name: " << RESET;
		getline(std::cin, last_name);
		std::cout << BLACKBOLD << "Nickname: " << RESET;
		getline(std::cin, nick_name);
		std::cout << BLACKBOLD << "Phone number: " << RESET;
		getline(std::cin, phone_number);
		std::cout << BLACKBOLD << "Darkest Secret: " << RESET;
		getline(std::cin, darkest_secret);
		if(!first_name.length() || !last_name.length() || !nick_name.length()
			|| !phone_number.length() || !darkest_secret.length())
			std::cout << RED << "The fields should not be empty! Pls try again!" << RESET << std::endl;
		else
			break;
	}
	Contact temp(first_name, last_name, nick_name, phone_number, darkest_secret);
	this->_contacts[_currentId % 8] = temp;
	this->_currentId++;
	if (this->_currentId <= 8)
		this->_idContact = this->_currentId;
	std::cout << GREEN << "Contact was added successfuly!" << RESET << std::endl;
}

void    PhoneBook::_search()
{
	size_t id_contact;
	
	_ShowContactsInfo();
	std::cout << RED << "Enter the id contact: " << RESET;
	std::cin >> id_contact;
	if (std::cin.fail())
		std::cout << RED << "Id contact Invalid!" << RESET<<std::endl;
	else
	{
		if (id_contact < this->_idContact)
		{
			std::cout << BLACKBOLD << "First Name:     " << CYAN << _contacts[id_contact]._getFirstName() << std::endl;
			std::cout << BLACKBOLD << "Last Name:      " << CYAN << _contacts[id_contact]._getLastName() << std::endl;
			std::cout << BLACKBOLD << "Nickname:       " << CYAN << _contacts[id_contact]._getNickName() << std::endl;
			std::cout << BLACKBOLD << "Phone Number:   " << CYAN << _contacts[id_contact]._getPhoneNumber() << std::endl;
			std::cout << BLACKBOLD << "Darkest Secret: " << CYAN << _contacts[id_contact]._getDarkestSecret() << RESET << std::endl;
		}
		else
			std::cout << RED << "Id contact Invalid!\n" << RESET;
	}
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
	

}

void    PhoneBook::_exit()
{
	std::cout << YELLOW << "Already leaving? Bue..." << std::endl;
	exit(0);
}

void    PhoneBook::_ShowContactsInfo()
{
	std::cout << YELLOW << "|Id Contact|First Name| Last Name|  NickName|"<<std::endl;
	for (size_t i = 0; i < this->_idContact; i++)
		std::cout<< "|" << std::setw(10) << i<< "|" << std::setw(10)
		<< resize_add_dot(_contacts[i]._getFirstName()) << "|" << std::setw(10)
		<< resize_add_dot(_contacts[i]._getLastName()) << "|" << std::setw(10)
		<< resize_add_dot(_contacts[i]._getNickName()) << "|" << std::endl;
}