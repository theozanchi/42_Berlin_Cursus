# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 13:32:19 by tzanchi           #+#    #+#              #
#    Updated: 2023/05/05 17:24:03 by tzanchi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
LIB		= libft.a

SRCS	=	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strcmp.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c

OBJS	= ${SRCS:.c=.o}

all:	${LIB}

${LIB}:	${OBJS}
		ar rcs ${LIB} ${OBJS}

.c.o:
		${CC} ${CFLAGS} -c $< -o $@

clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f ${LIB}

re:		fclean all

.PHONY:	all clean fclean re
