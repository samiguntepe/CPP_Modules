NAME = MutantStack
FILES = main.cpp
HEADERS = MutantStack.hpp MutantStack.tpp
FLAGS = c++ -std=c++98 -Wall -Wextra -Werror
GREEN	= \033[0;32m
RED		= \033[0;31m
CODE 	= \033[m

all: $(NAME)

$(NAME):	$(FILES) $(HEADERS) 
	@$(FLAGS) $(FILES) -o $(NAME)
	@echo "$(GREEN)[✓]$(CODE)"

clean:
	@rm -rf $(NAME)
	@echo "$(RED)[DELETED]$(CODE)"

re: clean all

.PHONY: all clean re