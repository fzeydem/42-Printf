/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatmdemi <fatmdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:11:00 by fatmdemi          #+#    #+#             */
/*   Updated: 2025/07/17 19:24:09 by fatmdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int findtype(va_list args, char type)
{
    int count;

    count = 0;
    if (type == 'c')
			count += count + ft_putchar(va_arg(args, int));
	else if (type == 's')
		count += count + ft_putstr(va_arg(args, char *));
	else if (type == 'd' || type == 'i')
		count += count + ft_putnbr(va_arg(args, int));
	else if (type == 'u')
		count += count + ft_putnbr_unsigned(va_arg(args, unsigned int));
    else if (type == 'x' || type == 'X')
	    count += ft_putnbr_hex(va_arg(args, unsigned int),type); // burayı count = count + ft_putnbr_hex(va_arg(args, unsigned int), str[i + 1]); böylede yazabilirdim. 
    else if (type == 'p')
	    count += ft_putptr(va_arg(args, void *));
    else if (type == '%')
        count += ft_putchar('%');
    return count;
}

int ft_printf(const char *str, ...)
{
    int i = 0;
    int count = 0;

	va_list args;
	va_start(args, str);
    
	while (str[i])
	{
		if(str[i] != '%')
            count += write(1,&str[i],1);
        else if(str[i] == '%' && str[i + 1] != '\0')
        {
            count += findtype(args,str[i + 1]);
            i++;
        }
        i++;
	}

	va_end(args);
	return count;
}
