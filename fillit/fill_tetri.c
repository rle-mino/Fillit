/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tetri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiarra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 16:48:11 by mdiarra           #+#    #+#             */
/*   Updated: 2016/01/07 17:07:14 by mdiarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	cleargrid(char *str, char c)
{
	int		i;
	char	x;

	x = c;
	i = 0;
	while (str[i])
	{
		if (str[i] == x)
			str[i] = '.';
		i++;
	}
}


void	ponderer(t_list *t, int size)
{
	int		i;

	i = 0;
	while (t)
	{
		if (t->newline == 1)
			i += (size - 4);
		t->index += i;
		t = t->next;
	}
}

int		checker(t_list *t, char *str, int b)
{
	t_list	*bus;

	bus = t;
	while (bus)
	{
		if (str[b + bus->index] != '.' || !str[b + bus->index])
			return (0);
		bus = bus->next;
	}
	return (1);
}

void		placer(t_list *t, char *str, int b)
{
	t_list	*bus;
	bus = t;
	while (bus)
	{
		str[b + bus->index] = bus->c;
		bus = bus->next;
	}
}

int			fill_tetri(t_list **t, char *s, int y, int b)
{
	if (!t[y])
		return (1);
	while (checker(t[y], s, b) != 1)
	{
		if (!s[b])
			return (0);
		b++;
	}
	placer(t[y], s, b);
	if (fill_tetri(t, s, y + 1, 0) == 1)
	{
		return (1);
	}
	cleargrid (s, t[y]->c);
	return (fill_tetri(t, s, y, b + 1));
}
