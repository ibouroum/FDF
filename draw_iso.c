/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_iso.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 19:23:18 by ibouroum          #+#    #+#             */
/*   Updated: 2019/01/31 21:37:50 by ibouroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	iso_pixel(t_fdf *s)
{
	int	i;
	int	j;

	i = 0;
	s->i_p = malloc(sizeof(t_vect *) * s->count_line);
	while (i < s->count_line)
	{
		s->i_p[i] = malloc(sizeof(t_vect) * s->count_char);
		j = 0;
		while (j < s->count_char)
		{
			s->i_p[i][j].z = s->p[i][j].z;
			s->i_p[i][j].x = (s->p[i][j].x - s->p[i][j].y) * cos(0.523599);
			s->i_p[i][j].y = ((s->p[i][j].x + s->p[i][j].y) * sin(0.523599));
			if (s->key == 91)
				s->i_p[i][j].y = ((s->p[i][j].x + s->p[i][j].y) *
						sin(0.523599)) - (1.5 * s->i_p[i][j].z);
			if (s->key == 84)
				s->i_p[i][j].y = ((s->p[i][j].x + s->p[i][j].y) *
						sin(0.523599)) + (1.5 * s->i_p[i][j].z);
			j++;
		}
		i++;
	}
	paint(s, s->i_p);
}

void	error_usage(void)
{
	ft_putstr("Usage : ./fdf <filename>\n");
	exit(0);
}
