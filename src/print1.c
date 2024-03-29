/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 19:15:59 by lasalced          #+#    #+#             */
/*   Updated: 2016/01/07 19:16:04 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void		print_type(int mode)
{
	if (S_ISDIR(mode))
		ft_putchar('d');
	else if (S_ISREG(mode))
		ft_putchar('-');
	else if (S_ISLNK(mode))
		ft_putchar('l');
	else if (S_ISSOCK(mode))
		ft_putchar('s');
	else if (S_ISFIFO(mode))
		ft_putchar('p');
	else if (S_ISCHR(mode))
		ft_putchar('c');
	else if (S_ISBLK(mode))
		ft_putchar('b');
}

void		print_rights(int mode)
{
	ft_putchar((mode & 0400) ? 'r' : '-');
	ft_putchar((mode & 0200) ? 'w' : '-');
	if (mode & 04000)
		ft_putchar((mode & 0100) ? 's' : 'S');
	else
		ft_putchar((mode & 0100) ? 'x' : '-');
	ft_putchar((mode & 040) ? 'r' : '-');
	ft_putchar((mode & 020) ? 'w' : '-');
	if (mode & 02000)
		ft_putchar((mode & 010) ? 's' : 'S');
	else
		ft_putchar((mode & 010) ? 'x' : '-');
	ft_putchar((mode & 04) ? 'r' : '-');
	ft_putchar((mode & 02) ? 'w' : '-');
	if (mode & 01000)
		ft_putchar((mode & 01) ? 't' : 'T');
	else
		ft_putchar((mode & 01) ? 'x' : '-');
}

void		print(t_file **file, t_print *prt, int i, char *arg)
{
	print_type(file[i]->stats.st_mode);
	print_rights(file[i]->stats.st_mode);
	print_acl_attr(file, i, arg);
	to_wedge_lli(file[i]->stats.st_nlink, prt->link_len);
	ft_putchar(' ');
	print_gr_ps(file[i], prt);
	if (S_ISCHR(file[i]->stats.st_mode) || S_ISBLK(file[i]->stats.st_mode))
	{
		to_wedge_lli(major(file[i]->stats.st_rdev), prt->maj_len);
		ft_putstr(", ");
		to_wedge_lli(minor(file[i]->stats.st_rdev), prt->min_len);
	}
	else
		to_wedge_lli(file[i]->stats.st_size, prt->size_len);
	ft_putchar(' ');
	print_date(file[i]);
	ft_putchar(' ');
	ft_putstr(file[i]->name);
	if (g_p && S_ISDIR(file[i]->stats.st_mode))
		ft_putchar('/');
	else if (S_ISLNK(file[i]->stats.st_mode))
		ft_putstr(" -> "),
		ft_putstr(file[i]->lnkname);
	ft_putchar('\n');
}

void		print_gr_ps(t_file *file, t_print *prt)
{
	if (g_o && g_g)
	{
		ft_putstr("  ");
		return ;
	}
	if (!g_g)
	{
		if (prt->ps)
			to_wedge2(prt->ps->pw_name, prt->ps_len);
		else
			to_wedge_lli2(file->stats.st_uid, prt->ps_len);
		ft_putstr("  ");
	}
	if (!g_o)
	{
		if (prt->gp)
			to_wedge2(prt->gp->gr_name, prt->gp_len);
		else
			to_wedge_lli2(file->stats.st_gid, prt->gp_len);
		!prt->dev ? ft_putstr("  ") : ft_putstr("   ");
	}
}
