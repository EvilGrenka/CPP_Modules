# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/29 23:27:41 by rnoriko           #+#    #+#              #
#    Updated: 2022/03/31 18:13:10 by rnoriko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= megaphone.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -rf
CXXFLAGS		= -Wall -Wextra -Werror -I.

NAME			= megaphone

all:			$(NAME)

$(NAME):	$(OBJS)
			@printf "🪧 $@ object file was created!\n"
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
			@printf "🧶 $@ executable file was created!\n"
			
clean:
				$(RM) $(OBJS)
				@printf "🧹 Delete $(NAME) object file...\n"

fclean:			clean
				$(RM) $(NAME)
				@printf "🧹 $(NAME) executable file was deleted\n"

re:				fclean $(NAME)

.PHONY:			all clean fclean re