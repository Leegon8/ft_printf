# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lauriago <lauriago@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 17:31:48 by lauriago          #+#    #+#              #
#    Updated: 2023/11/07 17:32:00 by lauriago         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#NAME & HEADER#

NAME = libftprintf.a 
HEADER = ft_printf.h

SRCS =  ft_print_digit.c ft_print_char.c \
	

OBJS = $(SRCS:.c=.o)

#VARIABLES#

AR = ar rcs
RM = rm -f
CCFLAGS = -Wall -Wextra -Werror -g

#TARGETS#

%.o: %.c $(HEADER)
	cc $(CCFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

#CLEAN#
clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

#RE-MAKE#
re: fclean all

.PHONY: all clean fclean re

