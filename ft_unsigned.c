/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauriago <lauriago@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:08:54 by lauriago          #+#    #+#             */
/*   Updated: 2023/11/09 13:10:41 by lauriago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
	{
		count = print_unsigned(n / 10);
		if (count != 1)
			return (-1);
		n = n % 10;
	}
	if (n <= 9)
	{
		if (print_char((n + '0')) != 1)
			return (-1);
		count++;
	}
	return (count);
}
