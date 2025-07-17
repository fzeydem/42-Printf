/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatmdemi <fatmdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:13:05 by fatmdemi          #+#    #+#             */
/*   Updated: 2025/07/17 18:33:58 by fatmdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putptr(void *ptr)
{
	int yazilan = 0;

	if (ptr == NULL)
		return ft_putstr("(nil)");

	yazilan = yazilan + ft_putstr("0x");
	yazilan = yazilan + ft_putptr_hex((unsigned long)ptr);

	return yazilan;
}
