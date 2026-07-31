NAME = playit
SRCS = ./srcs/playIt.cpp
OBJS = $(SRCS:.cpp=.o)


HEADER = ./includes/playIt.hpp
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17 -I./SFML/include

SFML_PATH = -L./SFML/build/lib

SFML_INCLUDES = -I./SFML/include

SFML_LIBS = \
	-lsfml-graphics-s \
	-lsfml-audio-s \
	-lsfml-window-s \
	-lsfml-system-s

SFML_DEPEND = \
	-lGL \
	-lX11 \
	-lXrandr \
	-lXcursor \
	-lXi \
	-ludev \
	-lvorbis \
	-logg \
	-lvorbisfile \
	-lvorbisenc \
	-lFLAC \
	-lfreetype \
	-lopenal

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) $(SFML_PATH) $(SFML_LIBS) $(SFML_DEPEND) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re