/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:29:50 by marvin            #+#    #+#             */
/*   Updated: 2023/11/07 17:08:19 by lauriago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static int	int_min(int n)
{
	(void)n;
	if (write(1, "-2147483648", 11) != 11)
		return (-1);
	return (11);
}

int	print_number(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (int_min(n));
	if (n < 0 && ++count)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		count += print_number(n / 10);
		if (count == -1)
			return (-1);
		n = n % 10;
	}
	if (n >= 0 && n <= 9)
	{
		if (print_number((n + '0')) != 1)
			return (-1);
		count++;
	}
	return (count);
}
/*
int main(void)
{
	print_number(2);
	return (0);
}*/
