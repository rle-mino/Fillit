/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_to_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:18:35 by rle-mino          #+#    #+#             */
/*   Updated: 2015/12/09 17:49:13 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

char	*file_to_line(size_t size, int file)
{
	char	*line;
	int		red;

	line = ft_strnew(size);
	while (red)
		red = read(file, line, size);
	close(file);
	return (line);
}
