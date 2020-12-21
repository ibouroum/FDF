/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 22:25:26 by ibouroum          #+#    #+#             */
/*   Updated: 2019/01/31 20:32:00 by ibouroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		fdf_keys(int key, t_fdf *struc)
{
	struc->key = key;
	if (key == 34 || key == 91 || key == 84)
	{
		struc->sym = 0;
		mlx_clear_window(struc->mlx_ptr, struc->win_ptr);
		iso_pixel(struc);
	}
	else if (key == 69 || key == 78)
	{
		mlx_clear_window(struc->mlx_ptr, struc->win_ptr);
		if (struc->sym == 1)
			zoom(struc, struc->p);
		else
			zoom(struc, struc->i_p);
	}
	else if (key == 124 || key == 123 || key == 126 || key == 125)
	{
		mlx_clear_window(struc->mlx_ptr, struc->win_ptr);
		if (struc->sym == 1)
			change_position(struc, struc->p);
		else
			change_position(struc, struc->i_p);
	}
	ky(key, struc);
	return (0);
}

void	ky(int key, t_fdf *struc)
{
	if (key == 53)
		exit(0);
	else if (key == 35)
	{
		struc->sym = 1;
		mlx_clear_window(struc->mlx_ptr, struc->win_ptr);
		paint(struc, struc->p);
	}
}
