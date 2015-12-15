/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tetri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiarra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 16:48:11 by mdiarra           #+#    #+#             */
/*   Updated: 2015/12/14 14:40:58 by mdiarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

/*
void	placer(t_list *t, char *str, int size)
{
	int		i;
	int		n;
	t_list	*start;

	i = 0;
	n = 0;
	start = t;
	if(t->s_pos == 1)
	{
		str[i] = t->c;
		t = t->next;
	}
	while (t)
	{
		while (i < t->index + (size - 4))
		{
			if (str[i] == '\n')
				n = 1;
			i++;
		}
		if (str[i] != '.' || n != t->newline)
			placer(start, str + 1, size);
		else
		{
			str[i] = t->c;
			n = 0;
			t = t->next;
		}
	}
}
*/

void	ponderer(t_list *t, int size)
{
	int		i;
	t_list	*b;

	b = t;
	t = t->next;
	while (t)
	{
		if (t->index == 3)
			while (b)
			{
				b->index += 2;
				b = b->next;
			}
		if (t->index == 4 || t->index == 9)
			while (b)
			{
				b->index = +1;
				b = b->next;
			}
		t->index += (size - 4);
		t = t->next;
	}
}
/*
char	*fill_tetri(t_list **t, int size, int nb)
{
	char	*s;
	int		i;
	int		x;

	s = blank_tab(size, 0, 0, 0);
	i = 0;
	x = 0;
	printf("%i", nb);
	printf("%s", s);
	while(i < nb)
	{
		ponderer(t[i], size);
		printf("loop\n");
		placer(t[i], s, size);
		i++;
	}
	return(s);
}
*/
