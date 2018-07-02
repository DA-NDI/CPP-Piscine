#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avolgin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/09 18:42:23 by avolgin           #+#    #+#              #
#    Updated: 2018/07/01 22:38:04 by avolgin          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_gkrellm

SRC_MON =./main.cpp \
	SdlDisplay.cpp \
	SdlTimeDisplay.cpp \
	DateTimeMonitor.cpp \
	SdlShow.cpp \
	HostUserMonitor.cpp \
	SdlHostUserDisplay.cpp \
	SdlOSDisplay.cpp \
	OSInfo.cpp \
	CPUMonitor.cpp \
	RAMMonitor.cpp \
	ExecMonitor.cpp\
	SdlCPUDisplay.cpp\
	SdlRamDisplay.cpp \
	NetworkMonitor.cpp \
	SdlNetDisplay.cpp \
	SdlKittyDisplay.cpp \
	IMonitorModule.cpp \
	AsciiCat.cpp \
	CursesDisplay.cpp \
	TermParams.cpp \
	Display.cpp


OBJECT_MON = $(SRC_MON:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

INCLUDES = -I ./includes/

INCLUDES_SDL2 = -I ./src/SDL/SDL2.framework/Headers

INCLUDES_SDL2_IMAGE = -I ./src/SDL/SDL2_image.framework/Headers

INCLUDES_SDL2_TTF = -I ./src/SDL/SDL2_ttf.framework/Headers

FRAMEWORK_SDL2 = -F ~/CPP/RUSH01/src/SDL -framework SDL2 -framework SDL2_image \
	-framework SDL2_ttf

FRAMEWORK_MLX = -lmlx -framework OpenGL -framework AppKit

all: $(NAME)

$(NAME) : $(OBJECT_MON)
	@echo "\033[0;32mft_gkrellm compiled\033[0;0m"
	@clang++ -o $(NAME) $(FLAGS) $(OBJECT_MON) \
	$(INCLUDES_SDL2) \
	$(INCLUDES_SDL2_IMAGE) \
	$(INCLUDES_SDL2_TTF) \
	-rpath @loader_path/src/sdl $(FRAMEWORK_SDL2) \
	-framework OpenGL -framework AppKit -lncurses

%.o: %.cpp
	clang++ -g -o $@ -c $< $(INCLUDES) \
	$(INCLUDES_SDL2) \
	$(INCLUDES_SDL2_IMAGE) \
	$(INCLUDES_SDL2_TTF)

clean:
	/bin/rm -f $(OBJECT_MON)
	rm -f TAGS

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all tags

tags:
	etags -R *.cpp *.hpp
