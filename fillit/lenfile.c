/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lenfile.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:22:53 by rle-mino          #+#    #+#             */
/*   Updated: 2016/01/06 18:53:44 by mdiarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

size_t	lenfile(int fd)
{
	int		red;
	char	*buf;
	size_t	size;

	red = 1;
	size = 0;
	buf = ft_strnew(1);
	while (red)
	{
		red = read(fd, buf, 1);
		size++;
	}
	free(buf);
	close(fd);
	return (size);
}
