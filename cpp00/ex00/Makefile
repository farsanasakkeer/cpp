NAME = megaphone

SRCS = megaphone.cpp

CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror

RM = rm -f

DEFAULT		=	"\033[0m"
RED			=	"\033[0;31m"

.PHONY: all clean re

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) megaphone.cpp -o $(NAME)

clean:
			@$(RM) $(OBJS)
			@echo $(RED)"Deleted cpp 00 object file"$(DEFAULT)

fclean:		clean
			@$(RM) $(NAME)
			@echo $(RED)"Deleted cpp 00 executable"$(DEFAULT)

re:			fclean all