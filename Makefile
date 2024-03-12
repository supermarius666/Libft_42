# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdumitru <mdumitru@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/12 13:50:33 by mdumitru          #+#    #+#              #
#    Updated: 2024/03/12 13:52:36 by mdumitru         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		libft.a
LIBC		=		ar -rcs
CC			=		cc
CFLAGS		=		-Wall -Wextra -Werror -g
SRC			=		ft_itoa.c ft_striteri.c ft_split.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_strmapi.c \
					ft_strtrim.c ft_atoi.c ft_strjoin.c ft_substr.c ft_strnstr.c ft_strncmp.c ft_strdup.c ft_strlcpy.c ft_memcmp.c \
					ft_memmove.c ft_memchr.c ft_calloc.c ft_isalnum.c ft_bzero.c ft_strrchr.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
					ft_isprint.c ft_memcpy.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_tolower.c ft_toupper.c		
SRC_BONUS	=		ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstsize.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS		=		$(SRC:.c=.o)
OBJS_BONUS	=		$(SRC_BONUS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(LIBC) $(NAME) $(OBJS)

bonus:		$(OBJS) $(OBJS_BONUS)
			$(LIBC) $(NAME) $(OBJS) $(OBJS_BONUS)
clean:
			rm -f $(OBJS) $(OBJS_BONUS)
			
fclean:		clean
			rm -f *~ $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus
