/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 16:39:55 by ibouroum          #+#    #+#             */
/*   Updated: 2018/10/07 17:01:44 by ibouroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	find;
	char	*str;

	i = 0;
	str = (char *)s;
	find = c;
	while (i < n)
	{
		if (str[i] == find)
			return (str + i);
		i++;
	}
	return (0);
}
