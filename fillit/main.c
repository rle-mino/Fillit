/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:16:16 by rle-mino          #+#    #+#             */
/*   Updated: 2015/12/11 18:27:39 by mdiarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	size_t	linesize;
	int		nb;
	t_list	*lst;

	lst = 0;
	linesize = 0;
	fd = openfile(argv[1]);
	if (fd < 3)
		return (0);
	linesize = lenfile(fd);
	fd = openfile(argv[1]);
	line = file_to_line(linesize, fd);
	if (precheck(line) == 0)
		return (0);
	nb = nb_piece(line);
	printf("%s, %i\n", line, nb);
	fillit(line, nb, lst);
}
