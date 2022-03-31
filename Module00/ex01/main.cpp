/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:39:27 by rnoriko           #+#    #+#             */
/*   Updated: 2022/03/31 17:20:15 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

static void show_header_phonebook()
{
    std::cout << YELLOW;
    std::cout << "#____________PHONEBOOK____________#" << std::endl;
    std::cout << "#              1-ADD              #" << std::endl;
    std::cout << "#             2-SEARCH            #" << std::endl;
    std::cout << "#              3-EXIT             #" << std::endl;
    std::cout << "#_________________________________#" << std::endl;
    std::cout << RESET;
}

int main ()
{
    PhoneBook YourPhoneBook;
    std::string command;

    show_header_phonebook();
    while(true)
    {
        std::cout << CYAN "> " << RESET;
        getline(std::cin, command);
        if (command == "ADD")
            YourPhoneBook._add();
        else if (command == "SEARCH")
			YourPhoneBook._search();
        else if (command == "EXIT")
            YourPhoneBook._exit();     
    }
    return (0);
}