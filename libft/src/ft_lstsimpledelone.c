/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsimpledelone.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/16 16:29:12 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/16 16:30:13 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstsimpledelone(t_list **alst)
{
	if (*alst)
	{
		free(*alst);
		*alst = NULL;
	}
}
