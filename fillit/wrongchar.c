/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongchar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:21:50 by rle-mino          #+#    #+#             */
/*   Updated: 2015/12/09 17:22:35 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		wrongchar(char c)
{
	if (c != '#' && c != '.')
		return (0);
	return (1);
}
