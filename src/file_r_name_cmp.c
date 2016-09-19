/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_r_name_cmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 12:09:05 by lasalced          #+#    #+#             */
/*   Updated: 2016/01/06 12:09:17 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int			file_r_name_cmp(void *ptr1, void *ptr2)
{
	t_file *f1;
	t_file *f2;

	f1 = (t_file *)ptr1;
	f2 = (t_file *)ptr2;
	return (ft_strcmp(f2->name, f1->name));
}
