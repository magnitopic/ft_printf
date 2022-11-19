/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:20:26 by alaparic          #+#    #+#             */
/*   Updated: 2022/11/19 12:42:10 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_categorize(const char c, va_list ap)
{
	int	len;

	if (c == 'c')
		len = ft_putchar(va_arg(ap, int));
	else if (c == 's')
		len = ft_putstr(va_arg(ap, char *));
	//else if (c == 'p')
	//	len = ft_;
	else if (c == 'i' || c == 'd')
		len = ft_putnbr(va_arg(ap, int));
	/*else if (c == 'i')
		len = ft_;
	else if (c == 'u')
		len = ft_;
	else if (c == 'x')
		len = ft_;
	else if (c == 'X')
		len = ft_;*/
	else if (c == '%')
		len = ft_putchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;

	va_start(ap, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			len += ft_categorize(*format, ap);
		}
		else
		{
			write(1, format, 1);
			len++;
		}
		format++;
	}
	va_end(ap);
	return (len);
}

int	main(void)
{
	char	test[28] = "hello";

	ft_printf("var : %s %d", test, 6969420);
	return (0);
}
