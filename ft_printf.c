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

int	ft_args(va_list args, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += print_char(va_arg(args, int));
	if (c == 's')
		count += print_string(va_arg(args, char *));
	if (c == 'p')
		count += print_ptr(va_arg(args, unsigned long), &count);
	if (c == 'd' || c == 'i')
		count += print_number(va_arg(args, int));
	if (c == 'u')
		count += print_unsigned(va_arg(args, unsigned int));
	if (c == 'x' || c == 'X')
		count += print_hex(va_arg(args, int), count, c);
	if (c == '%')
		count += print_char('%');
	return (count);
}

int	ft_printf(char const *str, ...)
{
	va_list		args;
	int			count;

	va_start(args, str);
	count = 0;
	while (str && count != -1)
	{
		if (*str == '%')
			count += ft_args(args, *(++str));
		else
			count += write(1, str, 1);
		count++;
	}
	va_end(args);
	return (count);
}
