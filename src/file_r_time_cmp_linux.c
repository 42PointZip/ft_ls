/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_r_time_cmp_linux.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 12:11:09 by lasalced          #+#    #+#             */
/*   Updated: 2016/01/06 12:11:13 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int			file_r_mtime_cmp(void *ptr1, void *ptr2)
{
	t_file *f1;
	t_file *f2;

	f1 = (t_file *)ptr1;
	f2 = (t_file *)ptr2;
	return (f1->stats.st_mtime - f2->stats.st_mtime ?
	f1->stats.st_mtime - f2->stats.st_mtime :
	file_r_name_cmp(ptr1, ptr2));
}

int			file_r_atime_cmp(void *ptr1, void *ptr2)
{
	t_file *f1;
	t_file *f2;

	f1 = (t_file *)ptr1;
	f2 = (t_file *)ptr2;
	return (f1->stats.st_atime - f2->stats.st_atime ?
	f1->stats.st_atime - f2->stats.st_atime :
	file_r_name_cmp(ptr1, ptr2));
}

int			file_r_ctime_cmp(void *ptr1, void *ptr2)
{
	t_file *f1;
	t_file *f2;

	f1 = (t_file *)ptr1;
	f2 = (t_file *)ptr2;
	return (f1->stats.st_ctime - f2->stats.st_ctime ?
	f1->stats.st_ctime - f2->stats.st_ctime :
	file_r_name_cmp(ptr1, ptr2));
}
