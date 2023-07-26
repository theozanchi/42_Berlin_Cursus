# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 13:32:19 by tzanchi           #+#    #+#              #
#    Updated: 2023/07/26 14:55:58 by tzanchi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
NAME		=	libft.a

# Colours and symbols
GREEN		=	\033[1;32m
CYAN		=	\033[1;36m
PURPLE		=	\033[1;35m
NC			=	\033[0m
TICK		=	✓

SRCS		=	ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_isspace.c \
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
				ft_strdup.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_printf.c \
				ft_printf_writers.c \
				get_next_line.c \
				ft_min.c \
				ft_max.c \
				ft_rad.c \
				ft_deg.c

OBJS		=	${SRCS:.c=.o}
SRC_NR		=	$(words ${SRCS})

all:			${NAME}

${NAME}:		entry_message ${OBJS}
				@echo " ${GREEN}DONE${NC}"
				@ar rcs ${NAME} ${OBJS} && echo "${CYAN}Creating ${NAME} archive file${NC}"
				@echo "${PURPLE}${NAME} created${NC}"

.c.o:
				@echo -n "${GREEN}${TICK}${NC}"
				@${CC} ${CFLAGS} -c $< -o $@

clean:
				@echo "Removing all .o files"
				@rm -f ${OBJS}

fclean:			clean
				@echo "Removing ${NAME} archive file"
				@rm -f ${NAME}

re:				fclean all

entry_message:
				@echo "${CYAN}Compilation of ${SRC_NR} files of the library:${NC}"

.PHONY:			all clean fclean re entry_message
