/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:48:23 by marvin            #+#    #+#             */
/*   Updated: 2023/11/12 20:35:48 by lauriago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>


int				ft_printf(char const *str, ...);
int				print_char(int c);
int				print_string(char *str);
void			print_ptr(unsigned long ptr, int *count);
static int		int_min(int n);
int				print_number(int n);
unsigned int	print_unsigned(unsigned int n);
void			print_hex(int n, int *count, char c);

#endif
