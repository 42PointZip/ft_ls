/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:23:31 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/07 17:24:59 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void			ft_putendl_fd(const char *s, int fd)
{
	while (*s)
		write(fd, s++, 1);
	ft_putchar_fd('\n', fd);
}
