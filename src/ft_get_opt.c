/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_opt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 12:43:29 by lasalced          #+#    #+#             */
/*   Updated: 2016/12/13 12:37:56 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int				get_opt(char *av[], t_opt *opt, int *i)
{
	char		*ret;

	if (!(*i))
	{
		if (av[opt->nb][0] == '-' && av[opt->nb][1] != '-' && av[opt->nb][1])
			(*i)++;
		else
		{
			if (av[opt->nb][0] == '-' && av[opt->nb][1] == '-')
			{
				if (av[opt->nb][2])
				{
					opt->err = '-';
					return ('?');
				}
				opt->nb++;
			}
			return (-1);
		}
	}
	if (!(ret = ft_strchr(opt->optstr, av[opt->nb][(*i)++])))
		opt->err = av[opt->nb][(*i) - 1];
	return (!ret ? '?' : *ret);
}

int				ft_get_opt(int argc, char *av[], t_opt *opt)
{
	static int	i = 0;

	if (!av[opt->nb][i])
	{
		if (!i)
			return (0);
		i = 0;
		opt->nb++;
		if (opt->nb == argc)
			return (-1);
	}
	return (get_opt(av, opt, &i));
}
