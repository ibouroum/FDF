/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ismail.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 18:10:48 by ibouroum          #+#    #+#             */
/*   Updated: 2019/01/31 21:27:16 by ibouroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	paint(t_fdf *struc, t_vect **point)
{
	int i;
	int j;

	i = 0;
	while (i < struc->count_line)
	{
		j = 0;
		while (j < struc->count_char)
		{
			if (point[i][j].z != 0)
				struc->clr = 0xFF0000;
			else
				struc->clr = 0xFFFFFF;
			if (j < struc->count_char - 1)
				ligne(struc, point[i][j], point[i][j + 1], struc->clr);
			if (i < struc->count_line - 1)
				ligne(struc, point[i][j], point[i + 1][j], struc->clr);
			j++;
		}
		i++;
	}
}

int		strl_line(char **av)
{
	int		count;
	int		fd;
	char	*str;

	count = 0;
	fd = open(av[1], O_RDONLY);
	while (get_next_line(fd, &str))
		count++;
	return (count);
}

int		strl_char(char **ptr)
{
	int i;

	i = 0;
	while (ptr[i])
		i++;
	return (i);
}

void	remplissage(int fd, t_fdf *struc)
{
	char	*str;
	char	**ptr;
	int		i;
	int		j;

	i = 0;
	struc->p = malloc(sizeof(t_vect *) * struc->count_line);
	while (get_next_line(fd, &str))
	{
		ptr = ft_strsplit(str, ' ');
		struc->count_char = strl_char(ptr);
		struc->p[i] = malloc(sizeof(t_vect) * (strl_char(ptr)));
		j = 0;
		while (j < struc->count_char)
		{
			struc->p[i][j].y = i * 20;
			struc->p[i][j].x = j * 20;
			struc->p[i][j].z = ft_atoi(ptr[j]);
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	int		count_line;
	t_fdf	*struc;

	if ((fd = open(argv[1], O_RDONLY)) < 0)
		error_usage();
	struc = malloc(sizeof(t_fdf));
	struc->mlx_ptr = mlx_init();
	struc->win_ptr = mlx_new_window(struc->mlx_ptr, 2500, 2500, "ismail");
	struc->count_line = strl_line(argv);
	fd = open(argv[1], O_RDONLY);
	remplissage(fd, struc);
	iso_pixel(struc);
	mlx_hook(struc->win_ptr, 2, 1, fdf_keys, struc);
	mlx_loop(struc->mlx_ptr);
	free(struc);
	return (0);
}
