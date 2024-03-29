/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_time_cmp_macos.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 12:12:00 by lasalced          #+#    #+#             */
/*   Updated: 2016/01/06 12:12:02 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int			file_mtime_cmp(void *ptr1, void *ptr2)
{
	t_file *f1;
	t_file *f2;

	f1 = (t_file *)ptr1;
	f2 = (t_file *)ptr2;
	if (f1->stats.st_mtimespec.tv_sec == f2->stats.st_mtimespec.tv_sec)
		return (f2->stats.st_mtimespec.tv_nsec - f1->stats.st_mtimespec.tv_nsec
		? f2->stats.st_mtimespec.tv_nsec - f1->stats.st_mtimespec.tv_nsec :
		file_name_cmp(ptr1, ptr2));
	return (f2->stats.st_mtimespec.tv_sec - f1->stats.st_mtimespec.tv_sec ?
	f2->stats.st_mtimespec.tv_sec - f1->stats.st_mtimespec.tv_sec :
	file_name_cmp(ptr1, ptr2));
}

int			file_atime_cmp(void *ptr1, void *ptr2)
{
	t_file *f1;
	t_file *f2;

	f1 = (t_file *)ptr1;
	f2 = (t_file *)ptr2;
	if (f1->stats.st_atimespec.tv_sec == f2->stats.st_atimespec.tv_sec)
		return (f2->stats.st_atimespec.tv_nsec - f1->stats.st_atimespec.tv_nsec
		? f2->stats.st_atimespec.tv_nsec - f1->stats.st_atimespec.tv_nsec :
		file_name_cmp(ptr1, ptr2));
	return (f2->stats.st_atimespec.tv_sec - f1->stats.st_atimespec.tv_sec ?
	f2->stats.st_atimespec.tv_sec - f1->stats.st_atimespec.tv_sec :
	file_name_cmp(ptr1, ptr2));
}

int			file_ctime_cmp(void *ptr1, void *ptr2)
{
	t_file *f1;
	t_file *f2;

	f1 = (t_file *)ptr1;
	f2 = (t_file *)ptr2;
	if (f1->stats.st_ctimespec.tv_sec == f2->stats.st_ctimespec.tv_sec)
		return (f2->stats.st_ctimespec.tv_nsec - f1->stats.st_ctimespec.tv_nsec
		? f2->stats.st_ctimespec.tv_nsec - f1->stats.st_ctimespec.tv_nsec :
		file_name_cmp(ptr1, ptr2));
	return (f2->stats.st_ctimespec.tv_sec - f1->stats.st_ctimespec.tv_sec ?
	f2->stats.st_ctimespec.tv_sec - f1->stats.st_ctimespec.tv_sec :
	file_name_cmp(ptr1, ptr2));
}
