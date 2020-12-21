/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 21:28:29 by ibouroum          #+#    #+#             */
/*   Updated: 2019/01/31 21:37:25 by ibouroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "get_next_line.h"
# include "libft/libft.h"
# include <mlx.h>
# include <math.h>

typedef struct	s_vect
{
	float x;
	float y;
	float z;
	float z1;
	float z2;
}				t_vect;
typedef struct	s_fdf
{
	int		clr;
	int		sym;
	int		key;
	int		count_line;
	int		count_char;
	int		dx;
	int		dy;
	int		xinc;
	int		yinc;
	t_vect	**p;
	t_vect	**i_p;
	void	*mlx_ptr;
	void	*win_ptr;
}				t_fdf;

void			ligne(t_fdf *fdf, t_vect point1, t_vect point2, int color);
int				strl_ligne(char **av);
int				strl_char(char **ptr);
void			remplissage(int fd, t_fdf *struc);
void			paint(t_fdf *struc, t_vect **point);
void			cas_neg(t_fdf *fdf, int x, int y, int color);
void			cas_sup(t_fdf *fdf, int x, int y, int color);
void			iso_pixel(t_fdf *struc);
int				fdf_keys(int key, t_fdf *struc);
void			zoom(t_fdf *struc, t_vect **point);
void			change_position(t_fdf *struc, t_vect **point);
void			error_usage(void);
void			ky(int key, t_fdf *struc);
#endif
