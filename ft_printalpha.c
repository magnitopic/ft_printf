/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 08:21:44 by alaparic          #+#    #+#             */
/*   Updated: 2022/11/18 17:33:57 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(va_list ap)
{
	int	len;
	char *c;

	c = va_arg(ap, char *);
	len = 0;
	while (*c)
	{
		write(1, &*c++, 1);
		len++;
	}
	return (len);
}
