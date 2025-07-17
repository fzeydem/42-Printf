/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatmdemi <fatmdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:13:15 by fatmdemi          #+#    #+#             */
/*   Updated: 2025/07/17 18:13:17 by fatmdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(char *str)
{
	int i = 0;
	int yazilan = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		yazilan = yazilan + ft_putchar(str[i]);
		i++;
	}
	return yazilan;
}
