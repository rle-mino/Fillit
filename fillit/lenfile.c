/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lenfile.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:22:53 by rle-mino          #+#    #+#             */
/*   Updated: 2015/12/12 12:15:42 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

size_t	lenfile(int fd)
{
	int		red;
	char	*buf;
	size_t	size;

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
