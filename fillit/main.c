/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:16:16 by rle-mino          #+#    #+#             */
/*   Updated: 2016/01/06 20:02:18 by mdiarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	size_t	linesize;
	t_list	**lst;

	fd = open(argv[1], O_RDONLY);
	if (argc != 2 || fd < 2)
		ERROR
	linesize = lenfile(fd);
	//printf("dddd\n");
	fd = open(argv[1], O_RDONLY);
	line = file_to_line(linesize, fd);
	if (precheck(line) == 0)
		ERROR
	if ((fd = nb_piece(line)) > 26)
		ERROR
	lst = list_it(line, fd);
	ft_putstr(fillit(lst, fd, line, 2));
}
