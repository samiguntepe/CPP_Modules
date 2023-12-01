NAME	= zombieHorde
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS	= main.cpp Zombie.cpp zombieHorde.cpp
OBJS    = $(SRCS:.cpp=.o)
GREEN	= \033[0;32m
RED		= \033[0;31m
CODE 	= \033[m

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $@
	@echo "$(GREEN)[✓]$(CODE)"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(NAME) $(OBJS)
	@echo "$(RED)[DELETED]$(CODE)"

fclean: clean

re: fclean all

.PHONY: all clean fclean re