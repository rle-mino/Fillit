/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiarra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 14:07:34 by mdiarra           #+#    #+#             */
/*   Updated: 2016/01/07 17:07:46 by mdiarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list		**list_it(char *str, int nb)
{
	t_list	**pieces;

	pieces = blanklist(nb);
	s_fill(str, nb, pieces, 0);
	return (pieces);
}
