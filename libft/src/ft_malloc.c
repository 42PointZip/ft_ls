/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/02 14:25:05 by lasalced          #+#    #+#             */
/*   Updated: 2014/01/02 14:25:46 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		*ft_malloc(size_t n)
{
	void	*ret;

	if (!(ret = malloc(n)))
	{
		ft_putstr_fd("Malloc error: Program quited.", 2);
		exit (2);
	}
	return (ret);
}
