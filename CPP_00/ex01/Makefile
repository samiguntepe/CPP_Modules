NAME	= phonebook
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS	= phonebook.cpp
GREEN	= \033[0;32m
RED		= \033[0;31m
CODE 	= \033[m

all:
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "$(GREEN)[✓]$(CODE)"

clean:
	@rm -rf $(NAME)
	@echo "$(RED)[DELETED]$(CODE)"

fclean: clean

re: fclean all

.PHONY: all clean fclean re