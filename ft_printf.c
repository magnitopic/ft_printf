/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:20:26 by alaparic          #+#    #+#             */
/*   Updated: 2022/11/18 12:42:04 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_categorize(char c, char *param)
{
	int	len;

	if (c == 'c')
		len = ft_putchar(*param);
	else if (c == 's')
		len = ft_putstr(param);
	/*else if (c == 'p')
		len = ft_;
	else if (c == 'i' || c == 'd')
		len = ft_putnbr(param);
	else if (c == 'i')
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
	while (*format)
	{
		if (*format == '%')
		{
			len += ft_categorize(format[1], va_arg(ap, char *));
			format++;
		}
		else
			len += ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (len);
}

int	main(void)
{
	char	test[28] = "hello there, general kenobi";

	ft_printf("var : %c", 'c', "There");
	return (0);
}
