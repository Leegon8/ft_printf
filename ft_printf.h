/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:48:23 by marvin            #+#    #+#             */
/*   Updated: 2023/11/03 17:52:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>

/* PROTOTIPO PRINTF */

int     ft_printf(char const *, ...);

/* FUNCIONES CREADAS */

int 	print_char(int c);
void	print_string(char *str, int *count);
int	    print_number(int number, int *count);
void	print_pointer(unsigned long pointer, int *count);
void	print_hexa(int n, int *count, char c);
void	print_unsigned(unsigned int u, int *count);
#endif
