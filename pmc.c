/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pmc.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 19:24:22 by ibouroum          #+#    #+#             */
/*   Updated: 2019/01/31 20:47:28 by ibouroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	change_position(t_fdf *struc, t_vect **point)
{
	int	i;
	int	j;

	i = 0;
	while (i < struc->count_line)
	{
		j = 0;
		while (j < struc->count_char)
		{
			if (struc->key == 123)
				point[i][j].x -= 4;
			else if (struc->key == 124)
				point[i][j].x += 4;
			else if (struc->key == 126)
				point[i][j].y -= 4;
			else if (struc->key == 125)
				point[i][j].y += 4;
			j++;
		}
		i++;
	}
	paint(struc, point);
}

void	zoom(t_fdf *struc, t_vect **point)
{
	int	i;
	int	j;

	i = 0;
	while (i < struc->count_line)
	{
		j = 0;
		while (j < struc->count_char)
		{
			if (struc->key == 78)
			{
				point[i][j].x /= 2;
				point[i][j].y /= 2;
			}
			else if (struc->key == 69)
			{
				point[i][j].x *= 2;
				point[i][j].y *= 2;
			}
			j++;
		}
		i++;
	}
	paint(struc, point);
}
