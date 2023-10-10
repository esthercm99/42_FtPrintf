/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastane <ecastane@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 21:37:58 by ecastane          #+#    #+#             */
/*   Updated: 2023/10/08 11:44:03 by ecastane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	check_type(const char *input, void *arg)
{
	if (*input == 'c')
		return (print_char((int)arg));
	else if (*input == 's')
		return (print_string((char *)arg));
	else if (*input == 'd' || *input == 'i')
		return (print_int((int)arg));
	else if (*input == 'x')
		return (print_hex((unsigned int)arg, 87));
	else if (*input == 'X')
		return (print_hex((unsigned int)arg, 55));
	else if (*input == 'p')
		return (print_pointer((unsigned long)arg, 87));
	else if (*input == 'u')
		return (print_unsigned((unsigned int)arg));
	else if (*input == '%')
		return (print_char('%'));
	return (-1);
}

int	ft_printf(const char *input, ...)
{
	va_list			args;
	int				i;
	int				aux;

	if (!input)
		return (-1);
	i = 0;
	va_start(args, input);
	while (*input != '\0')
	{
		if (*input == '%')
		{
			input++;
			aux = check_type(input, va_arg(args, void *));
		}
		else
			aux = print_char(*input);
		if (aux == -1)
			return (aux);
		else
			i = i + aux;
		input++;
	}
	va_end(args);
	return (i);
}
