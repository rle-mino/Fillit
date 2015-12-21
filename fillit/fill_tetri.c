/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tetri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiarra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 16:48:11 by mdiarra           #+#    #+#             */
/*   Updated: 2015/12/21 20:23:43 by mdiarra          ###   ########.fr       */
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
		t = t->next;
	}
}

int		placer(t_list *t, char *str, int b)
{
	t_list	*bus;

	bus = t;
	if (!str[b])
		return (2);
	if (ft_strchr(str, bus->c) != NULL)
		return (0);
	while (bus)
	{
		if(str[b + bus->index] != '.' || !str[b + bus->index])
			return (0);
		bus = bus->next;
	}
	bus = t;
	while (bus)
	{
		str[b + bus->index] = bus->c;
		bus = bus->next;
	}
	//printf("%c placee \n", bus->c);
	return (1);
}

char	*fill_tetri(t_list **t, int size, int y, int b)
{
	char	*s;
	int		i;
	int		vld;

	s = blank_tab(size, 0, 0, 0);
	i = 0;
	vld = 0;
	printf("Iter avec size %i, char de depart %c, case de depart %i \n", size, t[y]->c, b);
	while(t[i])
	{
		vld = placer(t[y], s, b);
		if (vld == 0 && t[y + 1])
			y++;
		else if (vld == 0 && !t[y + 1])
		{
			y = 0;
			b++;
		}
		else if (vld == 1) /* piece placee */
		{
			i++;
			b = 0;
			y = 0;
		}
		else if (vld == 2)
			return (NULL);
	}
	printf("%s", s);
	return(s);
}
