/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastane <ecastane@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 21:38:52 by ecastane          #+#    #+#             */
/*   Updated: 2023/10/08 04:53:39 by ecastane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./Libft/libft.h"

int		print_int(int num);
int		print_char(char c);
int		print_string(char *s);
int		print_hex(unsigned int value, int asc);
int		ft_printf(const char *input, ...);
int		print_pointer(unsigned long value, int asc);
int		print_unsigned(unsigned int nb);

#endif