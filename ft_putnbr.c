/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatmdemi <fatmdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:12:56 by fatmdemi          #+#    #+#             */
/*   Updated: 2025/07/17 18:12:58 by fatmdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int n)
{
	int yazilan = 0;

	if (n == -2147483648)
		return ft_putstr("-2147483648");

	if (n < 0)
	{
		yazilan = yazilan + ft_putchar('-');
		n = -n;
	}

	if (n > 9)
	{
		yazilan = yazilan + ft_putnbr(n / 10);
		yazilan = yazilan + ft_putnbr(n % 10);
	}
	else
	{
		yazilan = yazilan + ft_putchar(n + '0');
	}

	return yazilan;
}
