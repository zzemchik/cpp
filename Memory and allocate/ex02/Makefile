NAME = main
HEADERS = .

SORCES = main.cpp 

CC = clang++

FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(HEADERS) $(SORCES)
	@ clang++ $(FLAG) $(SORCES) -o $(NAME)
	
%.o: %.c $(HEADERS) $(SORCES)
	clang++ $(FLAG) $< -o $@

clean:
	@ rm -rf $(NAME)

fclean: clean
	@ rm -rf $(NAME)
	
re: fclean all

.PHONY: all clean bonus fclean re