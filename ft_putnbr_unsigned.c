/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatmdemi <fatmdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:12:48 by fatmdemi          #+#    #+#             */
/*   Updated: 2025/07/17 18:12:51 by fatmdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_unsigned(unsigned int n)
{
	int yazilan = 0;

	if (n > 9)
	{
		yazilan = yazilan + ft_putnbr_unsigned(n / 10);
		yazilan = yazilan + ft_putnbr_unsigned(n % 10);
	}
	else
	{
		yazilan = yazilan + ft_putchar(n + '0');
	}
	return yazilan;
}
