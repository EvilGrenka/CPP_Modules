# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/17 10:39:41 by rnoriko           #+#    #+#              #
#    Updated: 2022/04/17 10:49:10 by rnoriko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp \
Fixed.cpp \

OBJS			= $(SRCS:.cpp=.o)

CPP				= clang++
RM				= rm -f
CPPFLAGS		= -Wall -Wextra -Werror -I.

NAME			= FixedPro

all:			$(NAME)

$(NAME):		$(OBJS) Fixed.hpp
				@printf "🪧 $@ object file was created!\n"
				$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS) -I Fixed.hpp
				@printf "🧶 $@ executable file was created!\n"

clean:
				$(RM) $(OBJS)
				@printf "🧹 Delete $(NAME) object file...\n"

fclean:			clean
				$(RM) $(NAME)
				@printf "🧹 $(NAME) executable file was deleted\n"

re:				fclean $(NAME)

.PHONY:			all clean fclean re
