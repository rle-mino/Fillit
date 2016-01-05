/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tetri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiarra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 16:48:11 by mdiarra           #+#    #+#             */
/*   Updated: 2016/01/05 18:01:52 by mdiarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"
void	cleargrid(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			str[i] = '.';
		i++;
	}
	//printf("cleaning done \n");
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
		printf("%i %i newline: %i, pos: %i\n", (t)->c, (t)->index, (t)->newline, (t)->s_pos);
		t = t->next;
	}
}

int		placer(t_list *t, char *str, int b)
{
	t_list	*bus;

	bus = t;
	while (bus)
	{
		if (str[b + bus->index] != '.')
			return (0);
		bus = bus->next;
	}
	bus = t;
	while (bus)
	{
		str[b + bus->index] = bus->c;
		bus = bus->next;
	}
	return (1);
}

int		fill_tetri(t_list **t, char *s, int y, int b)
{
	int		i;
	int		vld;

	i = 0;
	if (!t[y])
		return (1);
	else if (!s[b])
		return (0);
	else
	{
		vld = placer(t[y], s, b);
		printf("Iter char de depart %c, case de depart %i \n", t[y]->c, b);
		if (vld == 0)
			return (fill_tetri(t, s, y, b + 1));
		else if (vld == 1)
			return (fill_tetri(t, s, y + 1, 0));
	}
	return (0);
}
