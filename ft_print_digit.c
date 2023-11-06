/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:29:50 by marvin            #+#    #+#             */
/*   Updated: 2023/11/03 19:29:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
//#include <stdio.h>
//#include <limits.h>
int	print_number(int n)
{
	if (n == -2147483648)
	{
		print_string("-2147483648");
		return ;
	}
	if (n < 0)
	{
		print_char('-');
		print_string(ft_itoa(n));
	}
	else if (n > 9)
		print_string(ft_itoa(n));
	return (ft_atoi(n));
}
