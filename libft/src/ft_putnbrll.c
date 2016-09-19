/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrll.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:27:33 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/11 16:46:50 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbrll(long long int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else
	{
		if (n < 10)
			ft_putchar(n + '0');
		else
		{
			ft_putnbr(n / 10);
			ft_putchar((n % 10) + '0');
		}
	}
}
