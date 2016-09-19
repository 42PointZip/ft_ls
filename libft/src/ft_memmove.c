/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 17:29:21 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/06 10:35:41 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void						*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*strdst;
	const unsigned char		*strsrc;

	strdst = (unsigned char*)dst;
	strsrc = (const unsigned char*)src;
	if (!len)
		return (dst);
	if (strsrc < strdst)
	{
		strdst += len;
		strsrc += len;
		while (len--)
			*--strdst = *--strsrc;
	}
	else
		while (len--)
			*strdst++ = *strsrc++;
	return (dst);
}
