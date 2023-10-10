/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastane <ecastane@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 03:43:51 by ecastane          #+#    #+#             */
/*   Updated: 2023/10/08 11:32:27 by ecastane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_str(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (print_char(s[i]) == -1)
			return (-1);
		i++;
	}
	return (i);
}

int	print_string(char *s)
{
	if (!s)
	{
		free(s);
		s = NULL;
		print_str("(null)");
		return (6);
	}
	return (print_str(s));
}
