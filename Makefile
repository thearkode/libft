GREEN = \033[0;32m
GREENGREEN = \033[38;5;46m
RED = \033[0;31m
BLUE = \033[0;34m
GREY = \033[38;5;240m
RESET = \033[0m


NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

HEADERS = libft.h

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
		ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
		ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c 

OBJ = $(addprefix $(OBJ_DIR),$(SRC:.c=.o))
OBJ_DIR = obj/

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "$(GREEN)Libray [$(NAME)] created!$(RESET)"

$(OBJ_DIR)%.o: %.c
	@mkdir -p obj
	$(CC) $(CFLAGS) -I $(HEADERS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(RED)Objects Removed$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)Executable Removed$(RESET)"

re: fclean all

.PHONY: all clean fclean re