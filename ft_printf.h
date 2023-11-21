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

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stddef.h>

int	ft_printf(char const *str, ...);
int	print_char(int c);
int	print_string(char *str);
int	print_ptr(unsigned long ptr, int *count);
int	print_number(int n);
int	print_unsigned(unsigned int n);
int	print_hex(int n, int count, char c);

#endif
