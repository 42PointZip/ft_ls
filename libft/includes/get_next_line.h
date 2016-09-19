/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/13 12:44:13 by lasalced          #+#    #+#             */
/*   Updated: 2015/12/10 10:37:34 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# define BUFF_SIZE 1000

# include "libft.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

int			get_next_line(int fd, char **line);

#endif
