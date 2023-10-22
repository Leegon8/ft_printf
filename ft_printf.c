/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:47:26 by marvin            #+#    #+#             */
/*   Updated: 2023/10/19 19:47:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_printf(char const *, ...)
{

}

//Ejemplo de funcionamiento argumentos variables
void printNumbers(int num, ...) {
    va_list args;
    va_start(args, num); // Inicializar la lista de argumentos

    for (int i = 0; i < num; i++) {
        int value = va_arg(args, int); // Obtener el siguiente argumento
        printf("%d ", value);
    }

    va_end(args); // Finalizar la lista de argumentos
}
