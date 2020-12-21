/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 12:36:50 by ibouroum          #+#    #+#             */
/*   Updated: 2018/10/26 12:36:56 by ibouroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# define BUFF_SIZE 32

# include <stdio.h>

# include <sys/stat.h>

# include <fcntl.h>

# include <unistd.h>

# include "libft/libft.h"

int		get_next_line(int fd, char **line);

#endif
