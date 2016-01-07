/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_twod.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 11:43:18 by rle-mino          #+#    #+#             */
/*   Updated: 2016/01/07 17:06:58 by mdiarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void			free_twod(char **str)
{
	int		j;

	j = 0;
	if (str == NULL || *str == NULL)
		return ;
	while (str[j])
	{
		free(str[j]);
		j++;
	}
	free(str);
}
