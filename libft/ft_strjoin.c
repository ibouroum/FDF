/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 10:12:34 by ibouroum          #+#    #+#             */
/*   Updated: 2018/10/12 22:26:01 by ibouroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((s1 == 0 && s2 == 0) || !s1 || !s2)
		return (0);
	if ((fresh = (char *)malloc(sizeof(s1) * (ft_strlen(s1)
		+ ft_strlen(s2) + 1))) == 0)
		return (0);
	while (s1[i] != '\0')
	{
		fresh[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		fresh[i] = s2[j];
		i++;
		j++;
	}
	fresh[i] = '\0';
	return (fresh);
}
