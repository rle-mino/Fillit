/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:16:16 by rle-mino          #+#    #+#             */
/*   Updated: 2016/01/06 18:53:08 by mdiarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	size_t	linesize;
	t_list	**lst;

	fd = 0;
	lst = NULL;
	linesize = 0;
	if (argc != 2)
		return (0);
	fd = open(argv[1], O_RDONLY);
	printf("%d\n", fd);
	linesize = lenfile(fd);
	printf("%lu\n", linesize);
	fd = openfile(argv[1]);
	line = file_to_line(linesize, fd);
	printf("%s \n", line);
	if (precheck(line) == 0)
		return (0);
	if ((fd = nb_piece(line)) > 26)
	{
		DEBUG
		ft_putstr("error\n");
		return (0);
	}
	lst = list_it(line, fd);
	ft_putstr(fillit(lst, fd, line, 4));
}
