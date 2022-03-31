# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 13:45:28 by rnoriko           #+#    #+#              #
#    Updated: 2022/03/31 17:09:15 by rnoriko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= contact.cpp main.cpp phonebook.cpp
HEADERS			= colors.hpp contact.hpp phonebook.hpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -rf
CXXFLAGS		= -Wall -Wextra -Werror -I.

NAME			= phonebook

all:			$(NAME)

$(NAME):	$(OBJS) $(HEADERS)
			@printf "🪧 $@ object files was created!\n"
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
			@printf "🧶 $@ executable file was created!\n"
			
clean:
				$(RM) $(OBJS)
				@printf "🧹 Delete $(NAME) object files...\n"

fclean:			clean
				$(RM) $(NAME)
				@printf "🧹 $(NAME) executable file was deleted\n"

re:				fclean $(NAME)

.PHONY:			all clean fclean re