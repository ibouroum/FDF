/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ligne.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 15:57:14 by ibouroum          #+#    #+#             */
/*   Updated: 2019/01/31 20:36:33 by ibouroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	cas_sup(t_fdf *fdf, int x, int y, int color)
{
	int cumul;
	int i;

	i = 1;
	cumul = fdf->dx / 2;
	while (i <= fdf->dx)
	{
		x += fdf->xinc;
		cumul += fdf->dy;
		if (cumul >= fdf->dx)
		{
			cumul -= fdf->dx;
			y += fdf->yinc;
		}
		mlx_pixel_put(fdf->mlx_ptr, fdf->win_ptr, x, y, color);
		i++;
	}
}

void	cas_neg(t_fdf *fdf, int x, int y, int color)
{
	int	cumul;
	int	i;

	i = 1;
	cumul = fdf->dy / 2;
	while (i <= fdf->dy)
	{
		y += fdf->yinc;
		cumul += fdf->dx;
		if (cumul >= fdf->dy)
		{
			cumul -= fdf->dy;
			x += fdf->xinc;
		}
		mlx_pixel_put(fdf->mlx_ptr, fdf->win_ptr, x, y, color);
		i++;
	}
}

void	ligne(t_fdf *fdf, t_vect p1, t_vect p2, int color)
{
	int	x;
	int	y;

	x = p1.x + 400;
	y = p1.y + 400;
	fdf->dx = p2.x - p1.x;
	fdf->dy = p2.y - p1.y;
	fdf->xinc = (fdf->dx > 0) ? 1 : -1;
	fdf->yinc = (fdf->dy > 0) ? 1 : -1;
	fdf->dx = abs(fdf->dx);
	fdf->dy = abs(fdf->dy);
	mlx_pixel_put(fdf->mlx_ptr, fdf->win_ptr, x, y, color);
	if (fdf->dx > fdf->dy)
		cas_sup(fdf, x, y, color);
	else
		cas_neg(fdf, x, y, color);
}
