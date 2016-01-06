/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:16:16 by rle-mino          #+#    #+#             */
/*   Updated: 2016/01/06 18:05:52 by mdiarra          ###   ########.fr       */
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

	lst = NULL;
	linesize = 0;
	if ((fd = openfile(argv[1]) < 3))
	{
		ft_putstr("erorr\n");
		return (0);
	}
	linesize = lenfile(fd);
	fd = openfile(argv[1]);
	line = file_to_line(linesize, fd);
	if (precheck(line) == 0)
		return (0);
	if ((fd = nb_piece(line)) > 26)
	{
		ft_putstr("error\n");
		return (0);
	}
	lst = list_it(line, fd);
	ft_putstr(fillit(lst, fd, line, 4));
}
