/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 12:36:01 by ibouroum          #+#    #+#             */
/*   Updated: 2018/10/26 16:25:23 by ibouroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	int			ret;
	int			i;
	static char	*temp[256];
	char		buffer[BUFF_SIZE + 1];

	i = 0;
	if (fd < 0 || read(fd, temp, 0) < 0 || !line)
		return (-1);
	if (!temp[fd])
		temp[fd] = ft_strnew(0);
	while ((ret = read(fd, &buffer, BUFF_SIZE)))
	{
		buffer[ret] = '\0';
		temp[fd] = ft_strjoin(temp[fd], buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	while (temp[fd][i] != '\n' && temp[fd][i] != '\0')
		i++;
	*line = ft_strnew(i);
	*line = ft_strsub(temp[fd], 0, i);
	if (!ret && !ft_strlen(temp[fd]))
		return (0);
	temp[fd] = ft_strdup(temp[fd] + i + 1);
	return (1);
}
