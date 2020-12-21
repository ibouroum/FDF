/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 16:39:23 by ibouroum          #+#    #+#             */
/*   Updated: 2018/10/16 00:01:56 by ibouroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*dest;
	char	*srcc;
	size_t	i;
	char	ch;

	i = 0;
	ch = c;
	dest = (char *)dst;
	srcc = (char *)src;
	while (i < n)
	{
		dest[i] = srcc[i];
		if (dest[i] == ch)
			return (dest + 1 + i);
		i++;
	}
	return (0);
}
