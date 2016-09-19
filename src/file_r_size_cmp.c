/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_size_cmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 12:11:35 by lasalced          #+#    #+#             */
/*   Updated: 2016/01/06 12:11:39 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int			file_r_size_cmp(void *ptr1, void *ptr2)
{
	t_file *f1;
	t_file *f2;

	f1 = (t_file *)ptr1;
	f2 = (t_file *)ptr2;
	return (f1->stats.st_size - f2->stats.st_size ?
	f1->stats.st_size - f2->stats.st_size : file_r_name_cmp(ptr1, ptr2));
}
