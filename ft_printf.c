/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:20:26 by alaparic          #+#    #+#             */
/*   Updated: 2022/11/17 17:13:13 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	char	*str;

	va_start(ap, format);
	while (*format++)
	{
		ft_putnbr(*format);
	}
	//printf("%s", va_arg(ap, char *));
	//printf("%s", va_arg(ap, char *));
	va_end(ap);
	return (0);
}

int	main(void)
{
	ft_printf("yes", "Hello ", "There");
	return (0);
}