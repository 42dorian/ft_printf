NAME = libftprintf.a

CXX = cc

SRC = ft_printf.c \
		ft_handle_args.c 

OBJ = $(SRC:.C=.O)
CFLAGS = -Wall -Wextra -Werror
CREATION = ar -rc

all: $(NAME)

$(NAME): $(OBJ)
	@$(CREATION) $(NAME) $(OBJ)

fclean: clean
	rm -rf $(NAME)

clean: clean
	rm -f $(OBJ)
