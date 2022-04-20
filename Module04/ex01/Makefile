# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/20 10:25:40 by rnoriko           #+#    #+#              #
#    Updated: 2022/04/20 10:27:37 by rnoriko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ./Poly

SRCS_FOLDER = srcs
OBJECTSDIR = objects
HEADERS_FOLDER = headers

FLAGS = -Wall -Wextra -Werror
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
RESET = \033[0m

SRC_FILES = Cat.cpp \
Dog.cpp \
Animal.cpp \
Brain.cpp \

OBJS := $(addprefix $(OBJECTSDIR)/, $(SRC_FILES:.cpp=.o))

CC = clang++
RM = rm -rf
RMDIR = rm -rf
MKDIR = mkdir -p
MAKE = make -C
ECHO = /bin/echo
ERRIGNORE = 2>/dev/null

all: $(NAME)
	@echo "$(BLUE)██████████████████████ Compiling is DONE ███████████████████████$(RESET)"

$(NAME): $(OBJS) main.o
	@$(CC) -I $(HEADERS_FOLDER) $(OBJS) $(OBJECTSDIR)/main.o -o $@

$(OBJECTSDIR)/%.o: $(SRCS_FOLDER)/%.cpp $(HEADERS_FOLDER)
	@$(MKDIR) $(dir $@)
	@echo "$(BLUE)█ $(YELLOW)Compiling$(RESET) $<:\r\t\t\t\t\t\t\t$(GREEN){DONE}$(BLUE) █$(RESET)"
	@$(CC) $(FLAGS) -I $(HEADERS_FOLDER) -o $@ -c $<

main.o: main.cpp $(HEADERS_FOLDER)
	@echo "$(BLUE)█ $(YELLOW)Compiling$(RESET) $<:\r\t\t\t\t\t\t\t$(GREEN){DONE}$(BLUE) █$(RESET)"
	@$(CC) $(FLAGS) -I $(HEADERS_FOLDER) -o $(OBJECTSDIR)/$@ -c $<


clean:
	@echo "$(RED)deleting$(RESET): " $(OBJECTSDIR)
	@$(RMDIR) $(OBJECTSDIR)


fclean: clean
	@echo "$(RED)deleting$(RESET): " $(NAME)
	@$(RM) $(NAME) philo.dSYM $(ERRIGNORE)

re: fclean all

.PHONY:	all clean fclean re