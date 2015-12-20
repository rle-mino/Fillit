/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tetri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiarra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 16:48:11 by mdiarra           #+#    #+#             */
/*   Updated: 2015/12/20 19:17:56 by mdiarra          ###   ########.fr       */
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
	t_list	*b;
	t_list	*test;

	test = t;
	b = t;
	i = 0;
	while (t)
	{
		if (t->newline == 1)
			i += (size - 4);
		t->index = (t->index) + i;
		t = t->next;
	}
	while (test)
	{
		test = test->next;
	}
}

int		placer(t_list *t, char *str, int n)
{
	t_list	*bus;

	bus = t;
	if (!str[n])
	{
		printf("%i erreur(n) \n", n);
		return (2);
	}
	if (ft_strchr(str, t->c) != NULL)
	{
		printf("erreur(char) \n");
		return (0);
	}
	printf("n = %i\n", n);
	while (bus)
	{
		if(str[n + bus->index] != '.' || !str[n + bus->index])
		{
			printf("faux\n");
			return (0);
		}
		bus = bus->next;
	}
	bus = t;
	while (bus)
	{
		str[n + bus->index] = bus->c;
		bus = bus->next;
	}
	printf("%c placee \n", bus->c);
	return (1);
}

char	*fill_tetri(t_list **t, int size, int nb, int b)
{
	char	*s;
	int		i;
	int		vld;
	int		x;
	int		y;

	s = blank_tab(size, 0, 0, 0);
	i = 0;
	vld = 0;
	x = b;
	y = 0;
	while(i < nb)
	{
		vld = placer(t[y], s, x);
		printf("vld = %i \n", vld);
		if (vld == 0 && t[y + 1])
			y++;
		else if (vld == 1) /* piece placee */
		{
			i++;
			x = 0;
			y = 0;
		}
		else if (vld == 3 || !t[y + 1])
		{
			y = 0;
			x++;
		}
		else if (vld == 2)
			return (NULL);
	}
	printf("%s", s);
	return(s);
}
