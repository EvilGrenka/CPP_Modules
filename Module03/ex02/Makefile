# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/19 16:44:34 by rnoriko           #+#    #+#              #
#    Updated: 2022/04/20 09:36:49 by rnoriko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp \
ClapTrap.cpp \
ScavTrap.cpp \
FragTrap.cpp \

OBJS			= $(SRCS:.cpp=.o)

CPP				= clang++
RM				= rm -f
CPPFLAGS		= -Wall -Wextra -Werror -I.

NAME			= ClapTrapPro

all:			$(NAME)

$(NAME):		$(OBJS) ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
				@printf "🪧 $@ object file was created!\n"
				$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS) -I ClapTrap.hpp -I ScavTrap.hpp -I FragTrap.hpp
				@printf "🧶 $@ executable file was created!\n"
				
clean:
				$(RM) $(OBJS)
				@printf "🧹 Delete $(NAME) object file...\n"

fclean:			clean
				$(RM) $(NAME)
				@printf "🧹 $(NAME) executable file was deleted\n"

re:				fclean $(NAME)

.PHONY:			all clean fclean re
