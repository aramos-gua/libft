SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c
OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra

libft.a: $(OBJS)
	@echo "Creating Library..."
	ar rcs $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLSGS) -c $< -o $@

clean:
	rm -f $(OBJS libft.a)
