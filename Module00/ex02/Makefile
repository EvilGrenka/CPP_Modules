# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 21:19:06 by rnoriko           #+#    #+#              #
#    Updated: 2022/04/17 09:10:11 by rnoriko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= Account.cpp tests.cpp
HEADERS			= Account.hpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -rf
CXXFLAGS		= -Wall -Wextra -Werror -I.

NAME			= Account

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