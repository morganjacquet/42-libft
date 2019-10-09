SRCS	= ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c ft_tolower.c ft_toupper.c ft_bzero.c
OBJS	= $(SRCS:.c=.o)
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f
NAME	= libft.a

.c.o:	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
		ar -rc $(NAME) $(OBJS)
		ranlib $(NAME)

all:	$(NAME)
clean:	
		$(RM) $(OBJS)
		$(RM) $(OBJS) 
fclean:	clean
re:		fclean all

.PHONY:	all clean fclean re