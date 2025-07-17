NAME = libftprintf.a

SRCS = ft_printf.c   ft_putnbr.c            ft_putnbr_unsigned.c  ft_putptr_hex.c \
ft_putchar.c  ft_putnbr_hexandptr.c  ft_putptr.c           ft_putstr.c
OBJS = $(SRCS:.c=.o)

CC      = cc
RM      = rm -f
CFLAGS  = -Wall -Wextra -Werror

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
