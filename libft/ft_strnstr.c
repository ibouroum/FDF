/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 11:37:07 by ibouroum          #+#    #+#             */
/*   Updated: 2018/10/13 11:37:16 by ibouroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t			i;
	size_t			j;
	char			*res;

	res = "";
	i = 0;
	if (to_find[0] == '\0')
		return ((char*)str);
	while (i < len && str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			res = (char*)str + i;
			j = 0;
			while (str[i + j] == to_find[j] && (i + j) < len)
			{
				if (to_find[j + 1] == '\0')
					return (res);
				j++;
			}
			res = 0;
		}
		i++;
	}
	return (0);
}
