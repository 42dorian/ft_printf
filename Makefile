NAME = libftprintf.a

CXX = cc

SRC = ft_printf.c \
		ft_handle_args.c 

OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
CREATION = ar -rc

all: $(NAME)

$(NAME): $(OBJ)
	@$(CREATION) $(NAME) $(OBJ)

fclean: clean
	rm -f $(NAME)

clean: clean
	rm -f $(OBJ)

.PHONY: all clean fclean re
