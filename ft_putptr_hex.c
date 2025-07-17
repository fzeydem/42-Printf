/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatmdemi <fatmdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:34:53 by fatmdemi          #+#    #+#             */
/*   Updated: 2025/07/17 18:34:57 by fatmdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putptr_hex(unsigned long n)
{
	int yazilan = 0;
	char *hex = "0123456789abcdef";

	if (n >= 16)
		yazilan = yazilan + ft_putptr_hex(n / 16);

	yazilan = yazilan + ft_putchar(hex[n % 16]);
	return yazilan;
}
