# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lauriago <lauriago@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 17:31:48 by lauriago          #+#    #+#              #
#    Updated: 2023/11/12 20:34:42 by lauriago         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#NAME & HEADER#

# Output file name 
NAME = libftprintf.a 

# Header file
HEADER = ft_printf.h

# List of mandatory source files
SRCS =  ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putstr.c ft_putunbr.c

# Generate a list of objects from source files
OBJS = $(SRCS:.c=.o)

#VARIABLES#

AR = ar rcs
RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror

#TARGETS#

# Rule to build the library
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Rule to build object files
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

# Default rule
all: $(NAME)

#CLEAN#

# Rule to clean object files
clean: 
	$(RM) $(OBJS)

# Rule to clean object files and the library
fclean: clean
	$(RM) $(NAME)

#RE-MAKE#

# Rule to recompile everything from scratch
re: fclean all

# Indicates that "all", "clean", "fclean", "re" are not file names
.PHONY: all clean fclean re
