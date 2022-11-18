/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:20:26 by alaparic          #+#    #+#             */
/*   Updated: 2022/11/18 08:26:06 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;

	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
			return 0;		//TODO: replace with function call
		else
			len += ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (len);
}

int	main(void)
{
	ft_printf("yes", "Hello ", "There");
	return (0);
}
