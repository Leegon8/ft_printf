/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauriago <lauriago@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:42:33 by lauriago          #+#    #+#             */
/*   Updated: 2023/11/12 20:29:40 by lauriago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_args(va_list args, char c)
{
	if (c == 'c')
		print_char(va_args(args, int));
	if (c == 's')
		print_string(va_args(args, char *));
	if (c == 'p')
		print_ptr(va_args(args, unsigned long), count);
	if (c == 'd' || c == 'i')
		print_number(va_args(args, int));
	if (c == 'u')
		print_unsigned(va_args(args, unsigned int));
	if (c == 'x' || c == 'X')
		print_hex(va_args(args, int), count, c);
	if (c == '%')
		print_char('%');
}

int	ft_printf(char const *str, ...)
{
	va_list		args;
	size_t		i;
	int			length;

	i = 0;
	length = 0;
	va_start(args, str);
	while (str[i] && str[i + 1])
	{
		if (str[i] == '%')
		{
			i++;
			ft_args(str[i], args);
			i++;
		}
		else
		{
			print_char(str[i]);
			i++;
		}
	}
	va_end(args);
	return (length);
}
