CC = cc
CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -I libft.h
SRCS = ft_bzero.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_strlen.c \
		ft_memcpy.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_strncmp.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strdup.c \
		ft_atoi.c \
		ft_putchar_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_memcmp.c \
		ft_strchr.c \
		ft_putendl_fd.c \
		ft_itoa.c \
		ft_calloc.c \
		ft_strjoin.c \
		ft_strrchr.c \

OBJS = $(SRCS:%.c=%.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar r $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
