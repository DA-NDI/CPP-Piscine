#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avolgin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/09 18:42:23 by avolgin           #+#    #+#              #
#    Updated: 2018/07/02 11:23:30 by avolgin          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_retro

SRC_GAME =./main.cpp \
	Ncurses.cpp \
	Weapon.cpp \
	GameEntity.Interface.cpp \
	Player.cpp \
	Enemy.cpp \
	EnemyHorde.cpp \
	Star.cpp


OBJECT_GAME = $(SRC_GAME:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors

INCLUDES = -I ./includes

all: $(NAME)

$(NAME) : $(OBJECT_GAME)
	@echo "\033[0;32mft_retro compiled\033[0;0m"
	@clang++ -o $(NAME) $(FLAGS) $(OBJECT_GAME) -lncurses

%.o: %.cpp
	clang++ -std=c++98 $(FLAGS) -o $@ -c $< $(INCLUDES)

clean:
	/bin/rm -f $(OBJECT_GAME)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
