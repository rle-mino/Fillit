/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:16:16 by rle-mino          #+#    #+#             */
/*   Updated: 2015/12/09 18:09:42 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	size_t	linesize;

	fd = openfile(argv[1]);
	if (fd < 1)
		return (0);
	linesize = lenfile(fd);
	printf("size: %lu\n", linesize);
	fd = openfile(argv[1]);
	line = file_to_line(linesize, fd);
	printf("%s", line);
	if (precheck(line) == 0)
		return (0);
	printf("Valid !\n");
}
