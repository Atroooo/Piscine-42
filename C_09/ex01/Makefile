# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/21 13:01:54 by lcompieg          #+#    #+#              #
#    Updated: 2022/07/21 13:06:36 by lcompieg         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OBJS 	= ${SRCS:.c=.o}

NAME	= libft.a

HEADER	= ft.h

CC		= cc
CC1		= ar
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror -g

.c.o:	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

${LIB};	${CC1} rc ${NAME} ${OBJS} ${HEADER}

all:	${NAME} ${LIB}

clean:	
		${RM} ${NAME} 
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all
		
		all clean fclean re
