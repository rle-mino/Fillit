/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tetri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiarra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 16:48:11 by mdiarra           #+#    #+#             */
/*   Updated: 2015/12/16 14:30:25 by mdiarra          ###   ########.fr       */
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
		if (t->index == 3 && t->newline == 1)
			while (b)
			{
				b->index += 2;
				b = b->next;
			}
		else if ((t->index == 4 || t->index == 9) && t->newline == 1)
			while (b)
			{
				(b)->index += 1;
				b = (b)->next;
			}
		if (t->newline == 1)
			i += (size - 4);
		t->index = (t->index) + i;
		t = t->next;
	}
	while (test)
	{
		printf("index: %i\n", test->index);
		test = test->next;
	}
}

int		placer(t_list *t, char *str, int size, int n)
{
	int		i;
	t_list	*bus;

	i = 0;
	bus = t;
	printf("n = %i\n", n);
	if (n > (size + 1) * size)
			return (2);
	while (bus)
	{
		if(str[n + bus->index] != '.')
			return (0);
		else
			bus = bus->next;
	}
	while (t)
	{
		str[n + t->index] = t->c;
		t = t->next;
	}
	return (1);
}

char	*fill_tetri(t_list **t, int size, int nb, int b)
{
	char	*s;
	int		i;
	int		vld;
	int		x;

	s = blank_tab(size, 0, 0, 0);
	i = 0;
	vld = 0;
	x = b;
	//printf("b: %i\n", b);
	printf("size: %i\n", size);
	while(i < nb)
	{
		printf("loop\n");
		vld = placer(t[i], s, size, x);
		printf("vld = %i\n", vld);
		if (vld == 0) /*piece non placee */
			x++;
		else if (vld == 1) /* piece placee */
		{
			i++;
			x = 0;
		}
		else if (vld == 2 || x > (size + 1) * size)  /*limite atteinte */
			return (NULL);
	}
	printf("%s", s);
	return(s);
}
