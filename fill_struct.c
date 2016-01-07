/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiarra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 15:24:16 by mdiarra           #+#    #+#             */
/*   Updated: 2016/01/07 18:06:00 by mdiarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list		*lstnew(int pos)
{
	t_list	*start;

	start = ft_memalloc(sizeof(t_list));
	if (!start)
		return (NULL);
	(start)->s_pos = pos;
	(start)->c = 0;
	(start)->index = 0;
	(start)->newline = 0;
	return (start);
}

t_list		*lst_add_n(int n)
{
	t_list	*elem;
	t_list	*start;

	start = NULL;
	while (n > 0)
	{
		elem = lstnew(n);
		elem->next = start;
		start = elem;
		n--;
	}
	return (elem);
}

void		tabfill(t_list *blank, int x, char ch)
{
	t_list	*prev;
	int		i;

	i = 0;
	prev = blank;
	while ((blank)->c == ch)
	{
		prev = blank;
		blank = (blank)->next;
	}
	(blank)->c = ch;
	(blank)->index = x;
	if (((blank)->index) == ((prev)->index + 1) || (blank)->s_pos == 1)
		(blank)->newline = 0;
	else
		(blank)->newline = 1;
}

t_list		**blanklist(int nb)
{
	t_list	**blank;
	int		i;

	i = 0;
	blank = (t_list**)ft_memalloc(sizeof(t_list *) * (nb + 1));
	while (i < nb)
	{
		blank[i] = (t_list *)ft_memalloc(sizeof(t_list) * 4);
		blank[i] = lst_add_n(4);
		i++;
	}
	return (blank);
}

void		s_fill(char *str, int nb, t_list **blank, int i)
{
	int		x;

	x = 0;
	while (nb > 0)
	{
		if (str[0] >= 'A' && str[0] <= 'Z')
		{
			while (x < 16 && i < 4)
			{
				if (str[x] >= 'A' && str[x] <= 'Z')
				{
					tabfill(blank[str[0] - 65], x, str[x]);
					i++;
				}
				x++;
			}
			i = 0;
			nb--;
		}
		str = &str[x + 1];
		x = 0;
	}
}
