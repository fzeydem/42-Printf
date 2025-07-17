/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexandptr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatmdemi <fatmdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:12:38 by fatmdemi          #+#    #+#             */
/*   Updated: 2025/07/17 18:22:47 by fatmdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_hex(unsigned int n, char format)
{
	int yazilan = 0;
	char *hex_karakterleri;

	if (format == 'x')
		hex_karakterleri = "0123456789abcdef";
	else
		hex_karakterleri = "0123456789ABCDEF";

	if (n >= 16)
	{
		yazilan = yazilan + ft_putnbr_hex(n / 16, format);
	}

	yazilan = yazilan + ft_putchar(hex_karakterleri[n % 16]);

	return yazilan;
}
