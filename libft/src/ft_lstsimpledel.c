/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsimpledel.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/16 16:27:00 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/16 16:28:56 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstsimpledel(t_list **alst)
{
	if (*alst)
	{
		ft_lstsimpledel(&(*alst)->next);
		ft_lstsimpledelone(alst);
	}
}
