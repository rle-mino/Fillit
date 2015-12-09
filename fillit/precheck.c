/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precheck.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:29:29 by rle-mino          #+#    #+#             */
/*   Updated: 2015/12/09 17:42:47 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		precheck(char *str)
{
	int	ret;

	ret = gridchecker(str, 0, 0, 0);
	printf("%i\n", ret);
	if (ret == 0)
		return (0);
	ret = poschecker(str, 0, 0, 0);
	printf("%i\n", ret);
	if (ret == 0)
		return (0);
	return (1);
}
