/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 16:43:57 by ibouroum          #+#    #+#             */
/*   Updated: 2018/10/07 16:46:25 by ibouroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*m;

	m = (char *)haystack;
	if (needle[0] == '\0')
		return (m);
	i = 0;
	while (m[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (m[i + j] != needle[j])
				break ;
			j++;
		}
		if (needle[j] == '\0')
			return (m + i);
		i++;
	}
	return (0);
}
