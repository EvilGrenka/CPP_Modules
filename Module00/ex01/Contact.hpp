/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:43:05 by marvin            #+#    #+#             */
/*   Updated: 2022/03/31 16:43:21 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <string>

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
	
	public:
		Contact(){}
		Contact(std::string _firstName, std::string _lastName, std::string _nickName,
				std::string _phoneNumber, std::string _darkestSecret)
		{
			this->_firstName = _firstName;
			this->_lastName = _lastName;
			this->_nickName = _nickName;
			this->_phoneNumber = _phoneNumber;
			this->_darkestSecret = _darkestSecret;
		}
		~Contact(){}

		void	_setFirstName(std::string _firstName);
		void	_setLastName(std::string _lastName);
		void	_setNickName(std::string _nickName);
		void	_setPhoneNumber(std::string _phoneNumber);
		void	_setDarkestSecret(std::string _darkestSecret);

		std::string	_getFirstName();
		std::string	_getLastName();
		std::string	_getNickName();
		std::string	_getPhoneNumber();
		std::string	_getDarkestSecret();
};

#endif