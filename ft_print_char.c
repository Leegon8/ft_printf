/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:43:34 by marvin            #+#    #+#             */
/*   Updated: 2023/11/12 19:09:52 by lauriago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	print_char(int c)
{
	return (write (1, &c, 1));
}

int	print_string(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (print_char(*str) == -1)
			return (-1);
		count++;
		str++;
	}
	if (count > *str)
		return (count);
	if (!*str)
	{
		if ((write (1, "(null)", 6)) != 6)
			return (-1);
		return (6);
	}
	return (count);
}
