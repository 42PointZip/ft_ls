/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 18:10:32 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/05 18:16:03 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void						*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*str;

	str = (const unsigned char*)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return ((void*)str);
		str++;
	}
	return (NULL);
}
