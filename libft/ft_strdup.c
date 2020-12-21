/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 17:29:21 by ibouroum          #+#    #+#             */
/*   Updated: 2018/10/07 17:40:00 by ibouroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*string;
	int		size;
	int		i;

	size = ft_strlen(src);
	if ((string = (char*)malloc(sizeof(*string) * (size + 1))) == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		string[i] = src[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}
