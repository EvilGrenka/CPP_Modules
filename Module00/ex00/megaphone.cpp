/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:06:06 by rnoriko           #+#    #+#             */
/*   Updated: 2022/03/29 23:28:16 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

# define message "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int main (int argc, char **argv)
{
    if(argc > 1)
    {
        std::string msg;

        for(size_t i = 1; i < (size_t)argc; i++)
        {
            msg = argv[i];
            for(size_t j = 0; j < msg.length(); j++)
                std::cout<<(char)std::toupper(msg[j]);
        }
        std::cout<<std::endl;
    }
    else
        std::cout<<message<<std::endl;
    return (0);
}