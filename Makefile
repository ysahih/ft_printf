NAME =	libftprintf.a

SRCS =	ft_printf.c\
			ft_put_xxnbr.c\
			ft_putchar.c\
			ft_putnbr.c\
			ft_putstr.c\
			ft_putun_nbr.c\
			ft_putxnbr.c\
			ft_putaddress.c

OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra
CC = cc
RM = @rm -f
AR = @ar -rc

all: $(NAME)

%.o:%.c ft_printf.h
	$(CC) $(CFLAGS) -c $< 
	
$(NAME):$(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:clean
	$(RM) $(NAME)

re: fclean all