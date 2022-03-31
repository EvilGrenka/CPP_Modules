/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:12:28 by rnoriko           #+#    #+#             */
/*   Updated: 2022/03/31 16:41:21 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	Contact::_setFirstName(std::string _firstName)
{
	this->_firstName = _firstName; 
}

void	Contact::_setLastName(std::string _lastName)
{
	this->_lastName = _lastName;
}

void	Contact::_setNickName(std::string _nickName)
{
	this->_nickName = _nickName;
}

void	Contact::_setPhoneNumber(std::string _phoneNumber)
{
	this->_phoneNumber = _phoneNumber;
}

void	Contact::_setDarkestSecret(std::string _darkestSecret)
{
	this->_darkestSecret = _darkestSecret;
}

std::string	Contact::_getFirstName()
{
	return (_firstName);
}

std::string	Contact::_getLastName()
{
	return (_lastName);
}

std::string	Contact::_getNickName()
{
	return (_nickName);
}

std::string	Contact::_getPhoneNumber()
{
	return (_phoneNumber);
}

std::string	Contact::_getDarkestSecret()
{
	return (_darkestSecret);
}