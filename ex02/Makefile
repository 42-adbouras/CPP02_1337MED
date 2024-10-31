# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/26 16:57:44 by adbouras          #+#    #+#              #
#    Updated: 2024/10/31 12:53:10 by adbouras         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GRN		= \033[1;92m
YLW		= \033[1;93m
RED		= \033[1;91m
CYN		= \033[1;96m
RST		= \033[0;39m
CLN		= \033[K\r\c

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

NAME	= exe

SRC		= main.cpp Fixed.cpp

NCLD	= Fixed.hpp

OBJ_DIR = objects/

OBJ		= $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

all:$(NAME)

$(OBJ_DIR)%.o:%.cpp $(NCLD)
	@mkdir -p $(OBJ_DIR)
	@echo "$(YLW)[Genarating object file $@]$(RST)$(RST)"
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@echo "$(YLW)[Compiling $(NAME)]$(RST)$(RST)"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GRN)[Compiled successfully, to run, execute: ./$(NAME)]$(RST)"

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(RED)[Objects cleaned]$(RST)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(RED)[$(NAME) cleaned]$(RST)"

re: fclean all