/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 17:13:25 by ibouroum          #+#    #+#             */
/*   Updated: 2018/10/07 19:40:06 by ibouroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	const char	*str;
	char		*dst;

	i = 0;
	dst = dest;
	str = src;
	while (i < (int)n)
	{
		dst[i] = str[i];
		i++;
	}
	return (dest);
}
