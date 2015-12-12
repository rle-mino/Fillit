/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:16:16 by rle-mino          #+#    #+#             */
/*   Updated: 2015/12/12 17:00:52 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	size_t	linesize;
	int		i;

	i = 0;
	linesize = 0;
	fd = openfile(argv[1]);
	if (fd < 3)
		return (0);
	linesize = lenfile(fd);
	fd = openfile(argv[1]);
	line = file_to_line(linesize, fd);
	if (precheck(line) == 0)
		return (0);
	i = nb_piece(line);
	fillit(line, i);
}
