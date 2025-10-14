NAME = libftprintf.a

CXX = cc

SRC = THE FILES

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
