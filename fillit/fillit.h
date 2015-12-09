/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiarra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:58:53 by mdiarra           #+#    #+#             */
/*   Updated: 2015/12/09 17:15:44 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

int			openfile(const char *path);
size_t		lenfile(int fd);
int			wrongchar(char c);
int			precheck(char *str);
char		*file_to_line(size_t size, int file);
int			gridchecker(char *str, int i, int x, int y);
int			linkchecker(char *str, int i, int nb);
int			poschecker(char *str, size_t i, int x, int y);

#endif
