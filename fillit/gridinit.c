/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gridinit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiarra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 14:22:39 by mdiarra           #+#    #+#             */
/*   Updated: 2015/12/08 18:49:47 by mdiarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		openfile(const char *path)
{
	return (open(path, O_RDWR));
}

int		wrongchar(char c)
{
	if (c != '#' && c != '.')
		return (0);
	return (1);
}

size_t	lenfile(int fd)
{
	int		red;
	char	*buf;
	size_t	size;

	size = 0;
	buf = ft_strnew(1);
	while (red)
	{
		red = read (fd, buf, 1);
		size++;
	}
	free(buf);
	close(fd);
	return(size);
}
char	*file_to_line(size_t size, int file)
{
	char	*line;
	int		red;

	line = ft_strnew(size);
	while (red)
		red = read(file, line, size);
	close (file);
	return (line);
}

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
	if(precheck(line) == 0)
		return(0);
	printf("Valid !\n");
}
