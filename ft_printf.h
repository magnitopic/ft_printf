/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:21:18 by alaparic          #+#    #+#             */
/*   Updated: 2022/11/18 12:38:43 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include<stdarg.h>

int	ft_printf(const char *test, ...);
int	ft_putchar(char c);
int	ft_putstr(char *c);
int	ft_putnbr(int n);
#endif