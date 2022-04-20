# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/20 09:40:10 by rnoriko           #+#    #+#              #
#    Updated: 2022/04/20 09:40:12 by rnoriko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp \
ClapTrap.cpp \
ScavTrap.cpp \
FragTrap.cpp \
DiamondTrap.cpp \

OBJS			= $(SRCS:.cpp=.o)

CPP				= clang++
RM				= rm -f
CPPFLAGS		= -Wall -Wextra -Werror -I.

NAME			= ClapTrapProMax

all:			$(NAME)

$(NAME):		$(OBJS) ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
				@printf "🪧 $@ object file was created!\n"
				$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS) -I ClapTrap.hpp -I ScavTrap.hpp -I FragTrap.hpp -I DiamondTrap.hpp
				@printf "🧶 $@ executable file was created!\n"
				
clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)
				@printf "🧹 Delete $(NAME) object file...\n"

re:				fclean $(NAME)
				@printf "🧹 $(NAME) executable file was deleted\n"

.PHONY:			all clean fclean re
