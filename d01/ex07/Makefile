#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avolgin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/09 18:42:23 by avolgin           #+#    #+#              #
#    Updated: 2018/06/20 12:10:14 by avolgin          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = replace

SRC_PB =./main.cpp \
	FindAndReplace.class.cpp

OBJECT_PB = $(SRC_PB:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors

INCLUDES = -I ./includes

all: $(NAME)

$(NAME) : $(OBJECT_PB)
	@echo "\033[0;32mreplace compiled\033[0;0m"
	@clang++ -o $(NAME) $(FLAGS) $(OBJECT_PB)

%.o: %.c
	clang++ -std=c++98 $(FLAGS) -o $@ -c $<

clean:
	/bin/rm -f $(OBJECT_PB)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
