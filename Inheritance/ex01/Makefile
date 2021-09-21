NAME = main
HEADERS = ClapTrap.hpp

SORCES = main.cpp ClapTrap.cpp

CC = clang++

FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(HEADERS) $(SORCES)
	@ clang++ $(FLAG) $(SORCES) -o $(NAME)
	
clean:
	@ rm -rf $(NAME)

fclean: clean
	@ rm -rf $(NAME)
	
re: fclean all

.PHONY: all clean bonus fclean re