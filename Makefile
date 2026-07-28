NAME = playit
SRCS = ./srcs/playIt.cpp
OBJS = $(SRCS:.cpp=.o)


HEARDER = ./includes/playIt.hpp
CXX = c++
CXXFLAGS= -Wall -Wextra -Werror
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re