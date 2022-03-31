/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:45:52 by rnoriko           #+#    #+#             */
/*   Updated: 2022/03/31 17:58:13 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <climits>
# include "colors.hpp"
# include "contact.hpp"

class PhoneBook
{
    private:
        Contact _contacts[8];
        size_t  _idContact;
        size_t  _currentId;

    public:
        PhoneBook():_idContact(0), _currentId(0){}
        ~PhoneBook(){}

        void _add();
        void _search();
        void _exit();

        void _ShowContactsInfo();   
};


#endif