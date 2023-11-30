/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-ganb <del-ganb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 01:14:36 by del-ganb          #+#    #+#             */
/*   Updated: 2023/11/29 02:43:14 by del-ganb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(int nb, char type, int *len)
{
	char			*base;
	unsigned int	n;

	if (type == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	n = nb;
	if (n >= 16)
	{
		ft_puthex(n / 16, type, len);
		ft_putchar(base[n % 16], len);
	}
	else
		ft_putchar(base[n % 16], len);
}
