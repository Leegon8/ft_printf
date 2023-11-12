/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:48:23 by marvin            #+#    #+#             */
/*   Updated: 2023/11/07 17:48:30 by lauriago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

/* PROTOTIPO PRINTF */

int			ft_printf(char const *, ...);
int			print_char(int c);
int			print_string(char *str);
static int	int_min(int n);
int			print_number(int n);
// void		print_pointer(unsigned long pointer, int *count);
// void	print_hexa(int n, int *count, char c);
// void	print_unsigned(unsigned int u, int *count);

#endif
