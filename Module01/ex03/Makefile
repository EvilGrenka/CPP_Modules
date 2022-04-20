# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 21:35:58 by rnoriko           #+#    #+#              #
#    Updated: 2022/04/17 09:42:09 by rnoriko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp \
HumanA.cpp \
HumanB.cpp \
Weapon.cpp

HEADERS			= HumanA.hpp \
HumanB.hpp \
Weapon.hpp

OBJS			= $(SRCS:.cpp=.o)

CPP				= clang++
RM				= rm -f
CPPFLAGS		= -Wall -Wextra -Werror -I.

NAME			= Weapon

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)
				@printf "🧶 $@ executable file was created!\n"

$(OBJ): 		$(OBJ_DIR)/%.o: %.cpp $(SRCS_H)
				@mkdir -p $(OBJ_DIR)
				@clang++ -c $< -o $@
				@printf "🪧 $@ object file was created!\n"

clean:
				$(RM) $(OBJS)
				@printf "🧹 Delete $(NAME) object file...\n"

fclean:			clean
				$(RM) $(NAME)
				@printf "🧹 $(NAME) executable file was deleted\n"

re:				fclean $(NAME)

.PHONY:			all clean fclean re
